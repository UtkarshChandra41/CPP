

 // Encapsulation is wrapping up of data & member function in a single unit called class.

#include<iostream>
using namespace std;


// Class 

class Car {
 private: string Number;
public:         //Aceess Modifiers.  1.Private(default)  2.Public   3.Protected

    //Properties or Attributes
    string brand;
    int speed;

    //Methods or Functions 
    void drive() {
        cout << "The car is driving at " << speed << " km/h" << endl;
    }
};


int main() {
    Car myCar;  // Creating an object of Car

    myCar.brand = "Toyota";
    myCar.speed = 100;

    myCar.drive();  // Calling method using object


    Car SecCar;
    SecCar.brand="Ferrari";
    SecCar.speed=300;
    SecCar.drive();
}
