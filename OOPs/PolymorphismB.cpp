#include<iostream>
using namespace std;

class Animal {
public:
    void sound() {
        cout << "Animal makes sound" << endl;
    }
};

class Cat : public Animal {
public:
    void sound() {  // Overriding
        cout << "Cat meows" << endl;
    }
};

int main() {
    Cat c;
    c.sound();  // Calls Cat's version
}
