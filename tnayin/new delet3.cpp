#include <iostream>
using namespace std;
int main() {
int* p_age = new(nothrow) int [0x1fffffff];
if (p_age){
    delete[] p_age;
}else
    cout << "memory allocation failed.ending program" << endl;
    return 0;
}
