#include<iostream>
using namespace std;

int main(){
    // 1 01 101 0101 triangle banana hai
    // if 1 anj j == 
    // rows -> m , cols -> n

    int m;
    cout << "Enter number of rows: ";
    cin >> m;

    int mid= m/2+1; 
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= m; j++) {
            if (i==mid || j==mid) cout << " * ";
            else
            cout << "   ";
        }
        cout << endl; // move to next line after each row
    }

    return 0;
}
