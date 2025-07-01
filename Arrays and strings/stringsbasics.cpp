#include<iostream>
using namespace std;

int main() {
    // Declare and initialize a character array
    char arr[5] = {'w', 'e', 'd', 'd', 't'};

    // Print each character on a new line
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << endl;
    }

    // Declare a string to take full line input
    string s;
    cout << "Enter a line of text: ";
    getline(cin, s);  // Reads entire line including spaces

    cout<< s.length() << endl;

    // Print the entered string
    cout << "You entered: " << s << endl;

    return 0;
}
