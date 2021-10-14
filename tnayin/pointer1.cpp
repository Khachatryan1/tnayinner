#include <iostream>
using namespace std;
int main() {
int age = 30;
int dogs_age = 9;
cout << "integer age = " << age << endl;
cout << "integer dogs_age = " << dogs_age << endl;
int* p_integer = &age;
cout << "p_integer points to age" << endl;
cout << "p_integer = ox" << hex << p_integer << endl;
cout << "*p_integer = " << dec << *p_integer << endl;
p_integer = &dogs_age;
cout << "p_integer points to dogs_age now" << endl;
cout << "p_integer = 0x" << hex << p_integer << endl;
cout << "*p_integer =" << dec << *p_integer << endl;
   return 0;
}
