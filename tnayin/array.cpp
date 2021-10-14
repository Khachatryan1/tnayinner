#include <iostream>
using namespace std;
int main() {
const int array_len =5;
int my_numbers[array_len] = {24,-1,365,-999,2011};
int* p_numbers = my_numbers;
cout << "displaying array using pointer syntax,operator *" << endl;
for(int index = 0;index < array_len;++index)
    cout << "element" << index << " = " << *(my_numbers + index) << endl;
cout << "displaying array using pointer with array syntax, operator []" << endl;
for(int index = 0;index < array_len;++index)
    cout << "element" << index << " = "<< p_numbers[index] << endl;
    return 0;
}
