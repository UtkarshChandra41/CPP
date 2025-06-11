#include<iostream>

using namespace std;

int main() {
    int x;
    cout << "Enter an integer number";
    cin >> x;
    float y = (float)x;  //typecasting
    cout << y/2;
}