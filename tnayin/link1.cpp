#include <iostream>
using namespace std;
int main() {
int original = 30;
cout << "original = " << original << endl;
cout << "original is at address:" <<hex << &original << endl;
int& ref = original;
cout << "ref is at address:" << hex << &ref << endl;
int& ref2 = ref;
cout << "ref2 is at address:" << hex << &ref2 << endl;
cout << "ref2 gets value, ref2 = " << dec << ref2 << endl;
    return 0;
}
