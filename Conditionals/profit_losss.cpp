#include<iostream>
using namespace std;

int main(){
    int cp,sp,p,l;
cout << "Enter Cost Price" << endl;
cin >> cp;
cout << "Enter Selling Price" << endl;
cin >> sp;

if(sp>cp){
    p=sp-cp;
    cout<< "PROFIT OF: " << p << endl;
}
else if(sp<cp){
    l=cp-sp;
    cout << " LOSS" << l << endl;
}
else{
    cout << "NO PROFIT NO LOSS" << endl;
}
}