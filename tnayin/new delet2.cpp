#include <iostream>
using namespace std;
int main() {
try {
    int* p_age = new int[536870911];
    delete[] p_age;
}
catch (bad_alloc){
    cout << "memory allocation failed.enter program" << endl;
}
    return 0;
}
