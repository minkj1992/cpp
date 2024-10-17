#include <iostream>
#include <vector>

class Vector {
 public:
  Vector(int s) : data(s) {
    std::cout << "Vector constructor called" << std::endl;
  }
  ~Vector() { std::cout << "Vector destructor called" << std::endl; }
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
    return v.data[i];  // Simplified access for this example
  }
  int size() const override { return v.data.size(); }

 private:
  Vector v;
};

int main() {
  Container* c = new Vector_container(10);
  delete c;
  return 0;
}

// Vector constructor called
// Vector_container constructor called
// Vector_container destructor called
// Vector destructor called
// Container destructor called