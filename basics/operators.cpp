#include <iostream>
using namespace std;

int main(){
    
    int a=45, b=7;
    cout<< "Operators in c++"<<endl; // this 'endl' is for new line
    
    // Arithmetic Operators

    cout<<"The value of a+b is: "<<a+b<<endl;
    cout<<"The value of a-b is: "<<a-b<<endl;
    cout<<"The value of a*b is: "<<a*b<<endl;
    cout<<"The value of a/b is: "<<a/b<<endl;
    cout<<"The value of a%b is: "<<a%b<<endl;
    cout<<"The value of a++ is: "<<a++<<endl;
    cout<<"The value of a-- is: "<<a--<<endl;
    cout<<"The value of ++b is: "<<++b<<endl;
    cout<<"The value of --b is: "<<--b<<endl<<endl;

    // cout<<"Arithmetic"<<endl<<a+b<<endl<<a-b<<endl<<a*b<<endl<<a/b<<endl<<a%b<<endl<<a++<<endl<<a--<<endl<<++b<<endl<<--b<<endl;
    
    // Assignment Operators
    //int c = 'a'; // '=' is an assignment operator
    
    // Comparison Operators
    cout<<"The value of a==b is: "<<(a==b)<<endl;
    cout<<"The value of a!=b is: "<<(a!=b)<<endl;
    cout<<"The value of a>=b is: "<<(a>=b)<<endl;
    cout<<"The value of a<=b is: "<<(a<=b)<<endl;
    cout<<"The value of a>b is: "<<(a>b)<<endl;
    cout<<"The value of a<b is: "<<(a<b)<<endl<<endl;

    // Logical Operators
    cout<<"The value of logical AND (a==b && a>b) is: "<<((a==b) && (a>b))<<endl;
    cout<<"The value of logical OR (a==b || a>b) is: "<<((a==b) || (a>b))<<endl;
    cout<<"The value of logical NOT (!(a==b)) is: "<<(!(a==b))<<endl;

    return 0;
}