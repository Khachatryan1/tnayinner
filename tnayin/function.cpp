#include <iostream>
using namespace std;
const double pi = 3.14159;
double area(double input_radius);
double circumference(double input_radius);

int main() {
cout << "enter radius:";
double radius = 0;
cin >> radius;
cout << "area is:" << area (radius) << endl;
cout << "circumference is:" << circumference(radius) << endl;
    return 0;
}
double area(double input_radius){
    return pi * input_radius * input_radius;
}
double circumference(double input_radius){
    return 2 * pi * input_radius;
}