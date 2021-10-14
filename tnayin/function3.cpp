#include <iostream>
using namespace std;
int get_fib_number(int fib_index){
    if(fib_index < 2)
        return fib_index;
    else
        return get_fib_number(fib_index-1) + get_fib_number(fib_index - 2);
}
int main() {
cout << "enter 0-based index of desired fibonacci number:";
int index = 0;
cin >> index;
cout << "fibonacci number is:" << get_fib_number(index) << endl;
    return 0;
}
