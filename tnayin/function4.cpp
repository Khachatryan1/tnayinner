#include <iostream>
using namespace std;
const double pi = 3.14159;
void query_and_calculate(){
    cout << "enter radius:";
    double radius = 0;
    cin >> radius;
    cout << "area:" << pi * radius * radius << endl;
    cout << "do you wish to calculate circumference (y/n)?";
    char calc_circum;
    if(calc_circum == 'n')
        return;
    cout << "circumference:" << 2 * pi * radius << endl;
    return;
}
int main() {
query_and_calculate();
    return 0;
}
