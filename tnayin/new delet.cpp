#include <iostream>
using namespace std;
int main() {
int* p_age = new int;
cout << "enter your dogs age:";
cin >> *p_age;
cout << "age" << *p_age << "is stored at 0x" << hex << p_age << endl;
delete p_age;
    return 0;
}
