#include <iostream>
using namespace std;

//int sum(int a, int b); //function prototype
//int sum(int a, b); NOT ACCEPTABLE IN C++
int sum(int, int); //Acceptable
void greet();

int main(){
    int num1, num2; //ACTUAL PARAMETERS
    cout<<"Enter first number: "<<endl;
    cin>>num1;
    cout<<"Enter second number: "<<endl;
    cin>>num2; 
    cout<<"The sum is: "<<sum(num1, num2)<<endl;
    greet();
    return 0;
}

int sum(int a, int b){
    //FORMAL PARAMETERS
    // FORMAL PARAMETERS A AND B WILL BE TAKING VALUES FROM ACTUAL PARAMETERS NUM1 AND NUM2.
    int c = a+b;
    return c;
}

void greet(){
    cout<<"Hello, Morning!"<<endl;
}