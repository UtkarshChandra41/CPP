#include<iostream>
using namespace std;

int main (){
    int n;
    cout << "ENTER SOME NUMBERS";
    cin >> n;
    
    int ld, rev=0;

    while(n!=0){

        ld=n%10;
        rev=rev*10;
        rev=rev+ld;
        n=n/10;
    }

cout << rev;
}