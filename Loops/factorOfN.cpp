#include<iostream>

using namespace std;

int main (){
    int n;
    cout<< "ENTER n";
    cin >> n;
    int f=1;  // store the highest number"
    for (int i=1; i<n ; i++){
        if (n%i ==0) f=i;
    }
    cout << f;
}