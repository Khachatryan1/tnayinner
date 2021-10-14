#include <iostream>
using namespace std;
int main() {
int dogs_age = 30;
cout << "initialized dogs_age = " << dogs_age << endl;
int * p_age = &dogs_age;
cout << "p_age points to dogs_age" << endl;
cout << "enter an age for your dog:";
cin >> *p_age;
cout << "input stored using p_age at 0x" << hex << p_age << endl;
cout << "integer dogs_age = " << dec << dogs_age << endl;
    return 0;
}
