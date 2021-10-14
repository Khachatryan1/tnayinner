#include <iostream>
using namespace std;
void return_square(int& number){
    number *= number;
}
int main() {
cout << "enter a number you wish to square:";
int number = 0;
cin >> number;
    return_square(number);
    cout << "square is:" << number << endl;
    return 0;
}
