#ifndef RECTANGLE_H_
#define RECTANGLE_H_

class rectangle{
public:
  double getArea() const;
  double getPerimeter() const;
  void setWidth(double width);
  void setHeight(double height);
private:
  double width;
  double height;
};

#endif
