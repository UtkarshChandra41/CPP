#include<iostream>
using namespace std;

class Animal {
public:
    void eat() {
        cout << "This animal eats food" << endl;
    }
};

class Dog : public Animal {
public:
    void bark() {
        cout << "The dog barks" << endl;
    }
};

int main() {
    Dog d;
    d.eat();   // Inherited from Animal
    d.bark();  // Own method
}
