#include <iostream>
using namespace std;
void calc_area(const double* const p_pi,
               const double* const p_radius,
               double* const p_area)
{
    if (p_pi && p_radius && p_area)
        *p_area = (*p_pi) * (*p_radius) * (*p_radius);
}
int main() {
const double pi = 3.1416;
cout << "enter radius of circle:";
double radius = 0;
cin >> radius;
double area = 0;
    calc_area(&pi,&radius,&area);
    return 0;
}
