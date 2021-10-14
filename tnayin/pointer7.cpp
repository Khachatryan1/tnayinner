#include <iostream>
using namespace std;
int main() {
int* p_temperature;
cout << "is it sunny (y/n)?" << endl;
char user_input = 'y';
cin >> user_input;
if(user_input == 'y')
{
    p_temperature = new int;
    *p_temperature = 30;
}
cout << "temperature is:" << *p_temperature;
delete p_temperature;
    return 0;
}
