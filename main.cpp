#include <iostream>
class Monster {
  int damage;

 public:
  Monster() : damage(0) { std::cout << "Default Constructor is called\n"; }
  Monster(int d) : damage(d) { std::cout << "Constructor is called" << "\n"; }
  Monster(const Monster& m) {
    std::cout << "Copy constructor is called" << "\n";
    damage = m.damage;
  }

  Monster& operator=(const Monster& m) {
    std::cout << "Assignment is called, not copy constructor" << '\n';
    if (this != &m) {
      damage = m.damage;
    }
    return *this;
  }
};

int main() {
  Monster m1(10);   // Constructor is called
  Monster m2(m1);   // Copy constructor is called
  Monster m3 = m2;  // ️‍🔥 Copy constructor is called

  Monster m4;  // Default Constructor is called
  m4 = m1;     // ️‍🔥 Assignment is called, not copy constructor
}
