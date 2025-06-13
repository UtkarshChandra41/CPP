#include<iostream>
using namespace std;

int main (){
    int n;
    cout << " Enter n : ";
    cin >> n;
    bool flag = true;

     for (int i=2 ;i<=n ; i++){
        if (n%i==0){
        
            flag = false ; // False means composite
            break; // to get out of line
    
                    }
        }
    if(flag==true) cout << "Prime";
    else cout << " Composite";
     
}