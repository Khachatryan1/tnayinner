#include <iostream>
using namespace std;
int main() {
    const int array1_len = 3;
    const int array2_len = 2;
    int my_ints1[array1_len] = {35,-3,0};
    int my_ints2[array2_len] = {20,-1,};
    cout << "multiplying each int in my_ints1 by each in my_ints2:" << endl;
    for(int array1_index = 0;array1_index < array1_len;++ array1_index)
        for(int array2_index = 0;array2_index < array2_len;++ array2_index)
            cout << my_ints1[array1_index] << "x" << my_ints2[array2_index] << "=" <<my_ints1[array1_index] * my_ints2[array2_index] << endl;
        return 0;
}
