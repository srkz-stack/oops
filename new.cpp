#include<iostream>


class Entity{
private:
  int a;
public:
  Entity() : a(10){}
  void getValue(){}
};



int main(){
  Entity* e = (Entity*)(malloc(sizeof(Entity)));
  std::cout << "sucess" << '\n';
  free(e);
  return 0;
  
}
