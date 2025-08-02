#include<iostream>

class Circle{
public:
  Circle(double r) : radius(r){std::cout << "constructor is called!" << '\n';}
  double getRadius() const{
    return radius;
  }
  double getArea() const{
    return (3.14*radius*radius);
  }
  ~Circle(){std::cout << "destructor is called!" << '\n';}
private:
  double radius;
};





int main(){
  Circle* c = new Circle(11.2);
  std::cout << c->getRadius() << '\n';
  std::cout << c->getArea() << '\n';
  delete c;
  return 0;
}
