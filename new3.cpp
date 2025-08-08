#include <iostream>
using namespace std;

// Base class 1
class Car {
   public:
      void drive() {
         cout << "Driving on land" << endl;
      }
};

// Base class 2
class Boat {
   public:
      void sail() {
         cout << "Sailing on water" << endl;
      }
};

// Derived class
class DualModeVehicle: public Car, public Boat {
   public:
      void use() {
         drive(); // Calls the drive function from Car
         sail();   // Calls the sail function from Boat
      }
};

int main() {
   DualModeVehicle myVehicle;
   myVehicle.use(); // Demonstrates both functionalities
   return 0;
}

