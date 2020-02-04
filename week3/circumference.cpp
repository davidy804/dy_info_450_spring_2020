#include <iostream>
using namespace std;

const double PI = 3.14;

int main(){
    double radius;
    double circumference;
    double calculateCircumference(double radius);
    cout << "What is the radius of the circle?" << endl;
    cin >> radius;
    circumference = calculateCircumference(radius);
    cout << "The circumference of the circle is: " << circumference << endl;
    return 0;
}

double calculateCircumference(double radius){
    double circumference;
    circumference = 2 * PI * radius;
    return circumference;
}