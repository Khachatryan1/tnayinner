#include <iostream>
using namespace std;
int main() {
cout << "is it sunny  (y/n)?";
char user_input = 'y';
cin >> user_input;
if(user_input == 'y')
{
    int* p_temperature = new int;
    *p_temperature = 30;
    cout << "temperature is:" << *p_temperature << endl;
    delete p_temperature;
}
    return 0;
}
