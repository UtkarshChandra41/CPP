#include<iostream>
using namespace std;

int main(){
    // rectangle banana hai
    // rows -> m , cols -> n

    int m, n;
    cout << "Enter number of rows: ";
    cin >> m;
    cout << "Enter number of cols: ";
    cin >> n;

    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            cout << (char)(j+64) << " ";
        }
        cout << endl; // move to next line after each row
    }

    return 0;
}
