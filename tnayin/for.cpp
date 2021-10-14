#include <iostream>
using namespace std;
int main() {
    const int array_length = 5;
    int my_ints[array_length] = {0};
    cout << "populate array of" << array_length << "integers" << endl;
    for (int array_index = 0; array_index < array_length; ++ array_index)
    {
        cout << "enter an integer for element" << array_index << ":";
        cout << my_ints[array_index];
    }
    cout << "displaying contents of the array:" << endl;
    for(int array_index = 0;array_index < array_length; ++ array_index)
    {
        cout << "element" << array_index << "=" << my_ints[array_index] << endl;
    }
    return 0;
}
