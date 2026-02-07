#include <iostream>
using namespace std;

int sum(int a, int b){
    cout<<"Using function with 2 arguments."<<endl;
    return a+b;
}

int sum(int a , int b, int c){
    cout<<"Using function with 3 arguments."<<endl;
    return a+b+c;
}

int main(){
    cout<<"The sum of 5 and 2 is "<<sum(5, 2)<<endl;
    cout<<"The sum of 3, 5, 1 is "<<sum(3, 5, 1)<<endl;
    return 0;
}