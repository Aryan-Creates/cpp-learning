#include <iostream>

using namespace std;

int main(){
    float x = 13.3;
    float &y = x; // y is a reference variable referring to x
    
    cout<<x<<endl;
    cout<<y<<endl;
    
    return 0;
}