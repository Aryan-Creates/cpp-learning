#include <iostream>
using namespace std;

int sum(int a, int b){
    int c = a+b;
    return c;
}

void swap(int a, int b){
    int temp = a;
    a = b;
    b = temp;
}

// call by reference using pointers
void swapPointer(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

// call by reference using c++ reference variables
void swapReferenceVar(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

int main(){
    
    int x = 54, y = 32;

    cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl;
    //swap(x, y); //THis will not swap as it is call by value
    //swapPointer(&x, &y); // This will swap as it is call by reference using pointers
    swapReferenceVar(x, y); // This will swap as it is call by reference using c++ reference variables
    cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl;
    
    cout<<"The sum is "<<sum(x, y);
    return 0;
}