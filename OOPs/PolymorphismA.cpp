//Function Overloading (Same function name, different parameters)
cpp
Copy code

#include<iostream>
using namespace std;

class Print {
public:
    void show(int a) {
        cout << "Integer: " << a << endl;
    }

    void show(string s) {
        cout << "String: " << s << endl;
    }
};

int main() {
    Print p;
    p.show(5);
    p.show("Hello");
}
