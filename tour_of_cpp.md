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