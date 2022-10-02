#include <iostream>

#include "class1.h"

int main(int argc, char** argv)
{
  Class1 jerk;

  std::cout << "Here's the address of jerk: " << &jerk << std::endl;
  std::cout << "Here's jerk.getA(): " << jerk.getA() << std::endl;

  return 0;
}
