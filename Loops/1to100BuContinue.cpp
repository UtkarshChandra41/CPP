#include<iostream>
using namespace std;

int main (){
    bool  flag=true ; // True means odd
    cout << "To print 10 to 100 odd numbers using CONTINUE; " << endl ;
    for (int i=1; i<=100 ; i++){
        if(i%2==0) flag=false;{
        if (flag==false) {
            flag =true;
             continue;
            }
        else { 
        cout << i << " ";
        }
        }
    }
}