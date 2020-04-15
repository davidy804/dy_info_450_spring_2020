#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ofstream out ("randoms.txt");

    if (!out){
        cout << "Cannot open file." << endl;
        return 1;
    }

    int max = 9999;
    int min = -9999;

    for (int i=0; i<1000; i++){
        int random = (rand() % (max + 1 - min)) + min;
        out << random << endl;
    }

    out.close();

    return 0;
}
