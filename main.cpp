#include<iostream>
#include "rectangle.h"

int main(){
  rectangle r;
  r.setWidth(10.0);
  r.setHeight(20.0);
  std::cout << r.getArea() << '\n';
  std::cout << r.getPerimeter() << '\n';
  return 0;
}
