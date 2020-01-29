#include <iostream>
#include<cmath>
using namespace std;

int main(){
    int input;

    while(input>0){
        cout << "Enter positive value: " << endl;
        cin >> input;
        cout << "Your value squared is: " << pow(input, 2) << endl;
        continue;
    }
    if(input=0){
        return 0;
    }
}