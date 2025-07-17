#include<iostream>

class Entity{
public:
  std::string GetName(){return "Entity";}
};

class Player: public Entity{
private:
  std::string m_Name;
public:
  Player(const std::string& name)
  : m_Name(name) {}
  std::string GetName() {return m_Name;}
};

int main(){
  Entity* e = new Entity();
  std::cout << e->GetName() << std::endl;

  Player* p = new Player("srk");
  std::cout << p->GetName() << std::endl;

  Entity* entity = p;
  std::cout << entity->GetName() << std::endl;




  delete e;
  delete p;
}
