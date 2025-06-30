#include<iostream> 
using namespace std;

//function declaration
int sum(int a,int b){
 return a+b;
    
}

int main(){
int a ;
cout << "Enter 1st Number : ";
cin >>a;
int b;
cout << "Enter 2nd Number :";
cin>>b;
cout << sum(a,b);

}