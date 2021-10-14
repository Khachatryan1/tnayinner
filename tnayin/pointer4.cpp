#include <iostream>
#include <cstring>

using namespace std;
int main() {
cout << "how many integers you wish to enter?";
int input_nums = 0;
cin >> input_nums;
int* p_numbers = new int [input_nums];
int* p_copy = p_numbers;
cout << "successfully allocated memory for" << input_nums << "integers" << endl;
for(int index = 0;index < input_nums;++index){
    cout << "enter number " << index << ":";
    cin >> *(p_numbers + index);
}
cout << "displaying all numbers input :" << endl;
for(int index = 0;index < input_nums; ++index)
    cout << *(p_copy++) << " ";
cout << endl;
    return 0;
}
