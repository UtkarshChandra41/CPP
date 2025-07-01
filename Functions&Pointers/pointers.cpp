#include<iostream> 
using namespace std;

int main() {
    int x = 3;
    int* p;         // p is a pointer which will store the memory address
    p = &x;

    cout << &x << endl;   // prints the address of x
    cout << p << endl;    // prints the value of p (i.e., address of x)
    cout << x << endl;    // prints the value of x
    cout << *p << endl;   // dereferencing pointer(*) p to get the value at that address (which is x)
    cout << &p << endl;   //Address of the pointer itself
    
    return 0;
}
