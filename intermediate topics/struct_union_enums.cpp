#include <iostream>

using namespace std;

typedef struct employee
{
    int id;
    char favchar;
    float salary;
} ep;

union money
{
    int mangoes;
    float rupees;
    char car;
};

int main(){
    enum meal{breakfast, lunch, dinner};
    meal m = lunch;
    cout<<m<<endl;
    cout<<breakfast<<endl;
    cout<<lunch<<endl;
    cout<<dinner<<endl;
    struct employee aryan;
    union money m1;
    m1.mangoes = 6346;
    m1.car = 'v';
    cout<<"The value of mangoes is "<<m1.mangoes<<endl;
    cout<<"The value of car is "<<m1.car<<endl;
    ep lakshya;
    aryan.id = 9;
    aryan.favchar = 'A';
    aryan.salary = 4000000000;
    cout<<"The value is "<<aryan.id<<endl;
    cout<<"The value is "<<aryan.favchar<<endl;
    cout<<"The value is "<<aryan.salary<<endl;
    
    return 0;
}