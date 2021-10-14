#include <iostream>
using namespace std;
const double pi = 3.14159;
double surface_area(double radius,double height);
int main() {
cout << "enter the radius of the cylinder:";
double in_radius = 0;
cin >> in_radius;
cout << "enter the height of the cylinder:";
double in_height = 0;
cin >> in_height;
cout << "surface area:" << surface_area(in_radius,in_height) << endl;
    return 0;
}
double surface_area(double radius,double height){
    double area = 2 * pi * radius * radius + 2 * pi * radius * height;
    return area;
}