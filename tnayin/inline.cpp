#include <iostream>
using namespace std;
inline long double_num(int input_num){
    return input_num * 2;
}
int main() {
cout << " enter an integer:";
int input_name = 0;
cin >> input_name;
cout << "double is:" << double_num(input_name) << endl;
    return 0;
}
