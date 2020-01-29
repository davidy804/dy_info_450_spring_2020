#include <iostream>
#include<cmath>
using namespace std;

int main(){
    int input, i;
    bool isPrime = true;

    while(input>0){
        cout << "Enter value: " << endl;
        cin >> input;

        for(i=2; i<=input/2; i++){
            if(input % i == 0){
                isPrime = false;
                cout << "This is not a Prime Number." << endl;
                break;
            }
    
            else {
                cout << "This is a Prime Number." << endl;
                break;
            }
        }
    }
    
    if(input=0){
        return 0;
    }
}