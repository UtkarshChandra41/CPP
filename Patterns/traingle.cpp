#include<iostream>
using namespace std;

int main(){
    // rectangle banana hai
    // rows -> m , cols -> n

    int m, n;
    cout << "Enter number of rows: ";
    cin >> m;

    for (int i = 1; i <= m; i++) {
        for (int j =1; j<=i ; j++ ) {
            cout << j;
        }
        cout << endl; // move to next line after each row
    }

    return 0;
}
