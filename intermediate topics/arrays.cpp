#include <iostream>

using namespace std;

int main(){
    
    int marks[] = {4, 42, 22, 24, 29};
    int mathmarks[5];
    
    mathmarks[0] = 45;
    mathmarks[1] = 99;
    mathmarks[2] = 88;
    mathmarks[3] = 76;
    mathmarks[4] = 34;
    
    cout<<"These are math marks "<<endl;
    
    cout<<mathmarks[0]<<endl;
    cout<<mathmarks[1]<<endl;
    cout<<mathmarks[2]<<endl;
    cout<<mathmarks[3]<<endl;
    cout<<mathmarks[4]<<endl;
    
    cout<<"These are marks "<<endl;

    // cout<<marks[0]<<endl;
    // cout<<marks[1]<<endl;
    // marks[2] = 100;
    // cout<<marks[2]<<endl;
    // cout<<marks[3]<<endl;
    // cout<<marks[4]<<endl;

    for(int i = 0; i<5; i++){
        cout<<marks[i]<<endl;
    }
    
    return 0;
}