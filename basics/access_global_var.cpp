#include <iostream>

using namespace std;

int c = 200; // global variable

int main(){
    
    int a, b, c;
    
    cout<< "Enter the value of a: "<<endl;
    cin>>a;
    
    cout<< "Enter the value of b: "<<endl;
    cin>>b;
    
    c = a+b;
    
    cout<< "The value of c is: "<<c<<endl;
    cout<< "The value of global C is: "<<::c<<endl; // :: is used to access global variable
    
    return 0;
}