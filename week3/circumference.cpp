#include <iostream>
using namespace std;

double radius;
double circumference;
const double PI = 3.14;
double calculateCircumference(double radius);

int main(){
    cout << "What is the radius of the circle?" << endl;
    cin >> radius;
    circumference = calculateCircumference(radius);
    cout << "The circumference of the circle is: " << circumference << endl;
    return 0;
}

double calculateCircumference(double radius){
    circumference = 2 * PI * radius;
    return circumference;
}