#include <iostream>
using namespace std;
double area(double input_radius,double pi = 3.14);
int main() {
cout << "enter radius:";
double radius = 0;
cin >> radius;
cout << "pi is 3.14,do you wish to change this (y/n)?";
char change_pi = 'n';
cin >> change_pi;
double circle_area = 0;
if(change_pi == 'y'){
    cout << " enter new pi:";
    double new_pi = 3.14;
    cin >> new_pi;
    circle_area = area (radius,new_pi);
}
else
    circle_area = area(radius);
cout << "area is :" << circle_area << endl;

    return 0;
}
double area(double input_radius,double pi)
{
    return pi * input_radius * input_radius;
}
