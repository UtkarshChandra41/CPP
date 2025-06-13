#include<iostream>

using namespace std;

int main(){
    // 1 3 5 7 9 .....
    int n;
    cout << " TO print N ODD terms" << endl;
    cout << "Enter the value of N" << endl;
    cin >> n;
    for (int i=1 ; i<=2*n-1 ; i+=2){
        cout << i << " ";
    } 
}