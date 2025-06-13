#include<iostream>
using namespace std;

int main (){
    int n;
    cout << "ENTER SOME NUMBERS";
    cin >> n;
    int ld; //last digit
    int sum=0;
while(n!=0){
    ld=n%10;
    sum+=ld;
    n=n/10;

}
    cout << sum;
}