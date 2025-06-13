#include<iostream>
using namespace std ;
int main(){
    int n,m;
    cout << " ENTER NUMBER OF ROWS";
    cin>> n;
    cout << " ENTER NUMBER OF COLUMNS";
    cin >> m;
    for (int i=1; i<=n ; i++){
        for (int j=1; j<=m; j++){
            cout << " * "; 
        }
        cout << endl;
    }
}