#include<iostream>
#include "rectangle.h"

void rectangle::setWidth(double w){
  width = w;
}
void rectangle::setHeight(double h){
  height = h;
}
double rectangle::getArea() const{
  return (width * height);
}
double rectangle::getPerimeter() const{
  return (2*(width+height));
}
