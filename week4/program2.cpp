#include <iostream>
using namespace std;

int main(){
    int row;
    int col;
    char students[30][30];

    for(row=0; row<30; row++){
        cout << "Please enter student for index " << row << ": ";
        gets(students[row]);
        if(!students[row][0]) break;
    }

    for(col=0; col<row; col++)
        cout << "students[" << col << "] = " << students[col] << '\n';

    return 0;
}