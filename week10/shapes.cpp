#include <iostream>
using namespace std;
const int PI = 3; // for simplicity, we'll pretend PI is 3
class shape{
  public:
    int perimeter;
    int area;
    virtual int get_perimeter_length(){ return perimeter; }
    virtual int get_area(){             return area; }
};
class circle : public shape{
  public:
    circle(int radius){
        perimeter = 2*PI*radius;
        area = PI*(radius*radius);
    }
    int get_perimeter_length(){ return perimeter; }
    int get_area(){             return area; }
};
class rectangle : public shape{
  public:
    rectangle(int height, int width){
        perimeter = 2*(height + width);
        area = height*width;
    }
    int get_perimeter_length(){ return perimeter; }
    int get_area(){             return area; }
};
class square : public shape{
  public:
    square(int side) {
        perimeter = 4*side;
        area = side*side;
    }
    int get_perimeter_length(){ return perimeter; }
    int get_area(){             return area; }
};
int main(){
  shape *s1;
  circle c(3);
  s1 = &c;
  cout << "Perimeter: " << s1->get_perimeter_length() << " : Area " << s1->get_area() << endl;
  square s(3);
  s1 = &s;
  cout << "Perimeter: " << s1->get_perimeter_length() << " : Area " << s1->get_area() << endl;
  rectangle r(4,5);
  s1 = &r;
  cout << "Perimeter: " << s1->get_perimeter_length() << " : Area " << s1->get_area() << endl;
  return 0;
}