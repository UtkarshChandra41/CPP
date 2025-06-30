#include<iostream>
using namespace std;

int main(){
    // 1 01 101 0101 triangle banana hai
    // when (i+j)%2 => 0 else 1 
    // rows -> m , cols -> n

    int m;
    cout << "Enter number of rows: ";
    cin >> m;

    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= i; j++) {
            if( (i+j) %2 == 0) cout << 1 << " ";
            else cout << 0 << " ";
        }
        cout << endl; // move to next line after each row
    }

    return 0;
}
