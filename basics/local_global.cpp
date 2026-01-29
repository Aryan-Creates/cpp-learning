#include <iostream>
using namespace std;

int glo = 79;
void sum(){
    int a;
    cout << glo;
}

int main(){
    int glo = 23;
    glo = 56;
    sum();
    cout << glo;
    return 0;
}