#include <iostream>

using namespace std;

int main(){
    for(int i = 0; i<10; i++){
        if(i==4){
            //break; // exit the loop when i is 4
            continue; // skip the iteration when i is 4
        }

        cout<<i<<endl;
    }
    return 0;
}