#include <iostream>
using namespace std;
int main() {
int my_numbers[5];
int* p_numbers = my_numbers;
cout << "p_numbers = 0x" << hex << p_numbers << endl;
cout << "&my_numbers[0] = 0x" << hex << &my_numbers << endl;
    return 0;
}
