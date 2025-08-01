#include<iostream>
class Rectangle{
private:
  int Width;
  int Height;
public:
  void setWidth(int w);
  void setHeight(int h);
  double getArea() const;
  double getPerimeter() const;
};
void Rectangle::setWidth(int w){
  Width = w;
}
void Rectangle::setHeight(int h){
  Height = h;
}
double Rectangle::getArea() const{
  return (Width*Height);
}
double Rectangle::getPerimeter() const{
  return (2*(Height+Width));
}
int main(){
  int width = 10;
  int height = 20;
  Rectangle* r = new Rectangle();
  r->setWidth(width);
  r->setHeight(height);
  std::cout << r->getPerimeter() << '\n';
  std::cout << r->getArea() << '\n';
  delete r;

}
