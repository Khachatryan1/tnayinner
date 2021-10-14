#include <iostream>
using namespace std;
void calculate_square(const int& number,int& result){
    result = number * number;
}
int main() {
cout << "enter a number you wish to square:";
int number = 0;
cin >> number;
int square = 0;
    calculate_square(number,square);
    cout << number << "^2 =" << square << endl;
    return 0;
}
