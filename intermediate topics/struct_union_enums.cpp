#include <iostream>

using namespace std;

struct employee
{
    int id;
    char favchar;
    float salary;
};

int main(){
    struct employee aryan;
    aryan.id = 9;
    aryan.favchar = 'A';
    aryan.salary = 4000000000;
    cout<<"The value is "<<aryan.id<<endl;
    cout<<"The value is "<<aryan.favchar<<endl;
    cout<<"The value is "<<aryan.salary<<endl;
    
    return 0;
}