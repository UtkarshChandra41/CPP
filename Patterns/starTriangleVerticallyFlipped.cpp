#include<iostream>
using namespace std;

int main(){
    // 1 01 101 0101 triangle banana hai
    // when (i+j)%2 => 0 else 1 
    // rows -> m , cols -> n

    int n;
    cout << "Enter number of rows: ";
    cin >> n;


    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n-i; j++) {
            if( (i+j) %2 == 0)
         cout <<"  ";
        }
        for (int j=1 ; j<=i ;j++) {
                cout << " * ";
        }
            cout << endl;
    }

    return 0;
}
