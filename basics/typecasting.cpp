#include <iostream>

using namespace std;

int main(){
    int a = 6;
    float b = 6.34;
    
    cout<<"The value of a is: "<<(float)a<<endl;
    cout<<"The value of a is: "<<float(a)<<endl;
    cout<<"The value of b is: "<<(int)b<<endl;
    cout<<"The value of b is: "<<int(b)<<endl;
    int c = int(b);
    return 0;
}