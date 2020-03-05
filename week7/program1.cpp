#include <iostream>
#include <string>
using namespace std;

string reverse(string *s1);
int main(){
    string str1;
    while (true){
        cout << "Enter string: ";
        getline (cin, str1);
        if(str1=="\0"){
            break;
        }
        cout << "String reversed: " << reverse(&str1) << endl;
    }
    return 0;
}
string reverse(string *s1){
    string str1=*s1;
    string str2="";
    int length=s1->length();
    for (int i=1; i<length+1; i++){
        str2=str2+str1[length-i];
    }
    return str2;
}