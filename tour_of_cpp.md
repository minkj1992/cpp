# 1. The Basics
## 1.7 Pointers, Arrays, and References

- `[ ]` means `array of`
- `∗` means `pointer to`

```cpp

char v[6]; // array of 6 chars
char* p; // pointer to char
```

- `prefix unary ∗` means `contents of`
- `prefix unary &` means `address of`

```cpp
char* p = &v[3]; // p points to v's fourth element address
char x = *p; // *p is the object that p points to
```

- `unary suffix &` means `reference to`

```cpp
int v[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
for (auto& x : v)
    ++x;
```

> Reference (2)

1. A reference is similar to a pointer, except thet you don't need to use a prefix `*` to access the value referred to by the reference.
2. A reference cannot be made to refer to a different object after its initialization.

```cpp
void sort(vector<double>& v);
```

Above means, v do not copy vec. **If we don't want to modify an argument but still don't want the cost of copying, we use a `const reference`**

```cpp
double sum(const vector<double>& v);
```

```cpp
// g++ -std=c++20 main.cpp && ./a.out && rm a.out
#include <iostream>
#include <vector>
using namespace std;

double sum(const vector<double>& vec) {
  double total = 0.0;
  for (double v : vec) {
    total += v;
  }
  return total;
}

int main(void) {
  vector<double> v{1, 2, 3, 4, 5};
  double res = sum(v);
  cout << res << endl;
  return 0;
}
```

# 5. User-Defined Types


# C++ Virtual and Pure Virtual Destructors in Abstract Classes
> Understanding Destructor Behavior and Best Practices in Polymorphic Inheritance

I’m going to demonstrate the behavior of virtual and pure virtual destructors in C++ by showing the order of constructor and destructor calls in a polymorphic inheritance hierarchy. I’ll cover the importance of using virtual destructors in base classes to prevent resource leaks, explain how pure virtual destructors make a class abstract, and discuss why they must have implementations. Through code examples, I’ll show what happens when the base class destructor isn’t virtual and why the Container class in this example doesn’t need a constructor.


## 1. Abstract Class

```cpp
#include <iostream>
#include <vector>

class Vector {
public:
    Vector(int s) : data(s) {
        std::cout << "Vector constructor called" << std::endl;
    }
    ~Vector() {
        std::cout << "Vector destructor called" << std::endl;
    }
    std::vector<double> data;
};

class Container {
public:
    virtual double& operator[](int) = 0;
    virtual int size() const = 0;

    virtual ~Container() {
        std::cout << "Container destructor called" << std::endl;
    }
};

class Vector_container : public Container {
public:
    Vector_container(int s) : v(s) {
        std::cout << "Vector_container constructor called" << std::endl;
    }
    ~Vector_container() {
        std::cout << "Vector_container destructor called" << std::endl;
    }

    double& operator[](int i) override {
        return v.data[i]; // Simplified access for this example
    }
    int size() const override {
        return v.data.size();
    }
private:
    Vector v;
};

int main() {
    Container* c = new Vector_container(10);
    delete c;
    return 0;
}
```

### Execution Result

```
Vector constructor called
Vector_container constructor called
Vector_container destructor called
Vector destructor called
Container destructor called
```

### Explanation

- **Constructor Call Order:**
  1. `Vector`'s constructor initializes the member `v`.
  2. `Vector_container`'s constructor is called.

- **Destructor Call Order:**
  1. `Vector_container`'s destructor is called first.
  2. `Vector`'s destructor (member object) is called next.
  3. `Container`'s destructor (base class) is called last.

#### Detailed Explanation of Destructor Calls

1. **Derived Class Destructor Execution:**
   - When `delete c;` is called, even though `c` is a `Container*`, the destructor is `virtual`, so the actual object's destructor (`Vector_container`'s destructor) is invoked.
   - The body of `~Vector_container()` executes, printing `"Vector_container destructor called"`.

2. **Member Object Destructor Call:**
   - After the `Vector_container` destructor body finishes executing, the destructor for its member object `v` (`~Vector()`) is automatically called, printing `"Vector destructor called"`.

3. **Base Class Destructor Call:**
   - Finally, the base class destructor `~Container()` is called, printing `"Container destructor called"`.


#### Virtual and Pure Virtual Functions

- **Virtual Functions:**
  - Declared with the `virtual` keyword.
  - Allow derived classes to override base class methods.
  - Ensure the correct method is called based on the actual object type at runtime.

- **Pure Virtual Functions:**
  - Declared by assigning `= 0` to a virtual function.
  - Example: `virtual double& operator[](int) = 0;`
  - Make the class **abstract**, meaning it cannot be instantiated.
  - Derived classes must provide implementations for pure virtual functions.

#### Importance of a Virtual Destructor

- **Virtual Destructor in Base Class:**
  - Ensures that the destructor of the derived class is called when deleting an object through a base class pointer.
  - Without it, only the base class destructor would be called, potentially causing resource leaks.

- **In the Code:**
  - `Container` has a `virtual` destructor:
    ```cpp
    virtual ~Container() {
        std::cout << "Container destructor called" << std::endl;
    }
    ```
  - This ensures that `Vector_container`'s destructor is invoked when deleting through a `Container*`.



### Why `Container` Doesn't Have a Constructor

- **Default Constructor Suffices:**
  - `Container` doesn't have any member variables to initialize.
  - The compiler-generated default constructor is adequate.
- **Cannot Have Virtual Constructors:**
  - Constructors cannot be declared `virtual` or pure virtual in C++.
  - Virtual functions rely on the virtual table (`vtable`), which is set up during object construction. Constructors run before the `vtable` is set up.

- **Abstract Class Nature:**
  - `Container` is an abstract class due to its pure virtual functions.
  - Its purpose is to provide an interface for derived classes.
  - Instantiation of `Container` is not allowed, so a constructor is not necessary.

---

## 2. What Happens When the Base Class Destructor Is Not `virtual`

If you remove the `virtual` keyword from the base class destructor:

```cpp
class Container {
public:
    virtual double& operator[](int) = 0;
    virtual int size() const = 0;

    ~Container() {
        std::cout << "Container destructor called" << std::endl;
    }
};
```

### Execution Result

```
Vector constructor called
Vector_container constructor called
Container destructor called
```

### Issue and Explanation

- **Problem:** The destructors for `Vector_container` and `Vector` are not called.
- **Reason:** Without a `virtual` destructor in the base class, deleting an object through a base class pointer only calls the base class destructor. The derived class destructor and member destructors are not invoked.
- **Consequence:** This can lead to resource leaks and undefined behavior because the derived class and its members are not properly destroyed.
- **Conclusion:** Always declare the base class destructor as `virtual` when using inheritance and polymorphism.


---

## 3. When the Base Class Destructor Is Pure Virtual

You can declare the base class destructor as a pure virtual function:

```cpp
class Container {
public:
    virtual double& operator[](int) = 0;
    virtual int size() const = 0;

    virtual ~Container() = 0;
};

Container::~Container() {
    std::cout << "Container destructor called" << std::endl;
}
```

### Execution Result

```
Vector constructor called
Vector_container constructor called
Vector_container destructor called
Vector destructor called
Container destructor called
```

### Explanation

- **Pure Virtual Destructor:** Declaring the destructor as pure virtual forces the class to be abstract, but you must still provide an implementation.
- **Behavior:** The destructor remains virtual, ensuring proper destructor chaining. The derived class destructor is called first, followed by the member object destructors, and finally the base class destructor.
- **Benefit:** This allows you to maintain an abstract base class while ensuring that all destructors are called correctly.


#### Pure Virtual Destructor

- If you declare a destructor as pure virtual:
  ```cpp
  virtual ~Container() = 0;
  ```
- **Implementation Required:**
  - Even if the destructor is pure virtual, you must provide an implementation because destructors are called during object destruction.
  - Example:
    ```cpp
    Container::~Container() {
        std::cout << "Container destructor called" << std::endl;
    }
    ```
