#include <iostream>
using namespace std;
int main() {
int age = 30;
int * p_integer = &age;
cout << " p_integer points to age now" << endl;
cout << "p_integer = 0x" << hex << p_integer << endl;
int dogs_age = 9;
p_integer = &dogs_age;
cout << "p_integer points to dogs_age now" << endl;
cout << "p_integer = 0x" << hex << p_integer << endl;
    return 0;
}
