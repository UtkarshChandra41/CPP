#include<iostream>
using namespace std;

class Calculator {
public:
    int add(int a, int b) {
        return a + b;
    }
};

int main() {
    Calculator c;
    cout << "Sum: " << c.add(3, 5);  // User doesn't see how addition is done
}
