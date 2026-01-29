#include <iostream>

using namespace std;

int main(){
    float d=123.321f;
    long double e = 342.3242l;
    cout<<"The size of 1.1 is: "<<sizeof(1.1)<<endl;
    cout<<"The size of d is: "<<sizeof(1.1f)<<endl;
    cout<<"The size of d is: "<<sizeof(1.1F)<<endl;
    cout<<"The size of e is: "<<sizeof(1.1l)<<endl;
    cout<<"The size of e is: "<<sizeof(1.1L)<<endl;
    cout<<"The value of d is: "<<d<<endl<<"The value of e is: "<<e<<endl;
    return 0;
}