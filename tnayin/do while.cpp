#include <iostream>
using namespace std;
int main() {
    char user_selection = 'x';
    do {
        cout<<"enter the two integers:"<< endl;
        int num1 = 0, num2 = 0;
        cin >> num1;
        cin >> num2;
        cout << num1 << "x" << num2 << "=" << num1 * num2 << endl;
        cout << num1 << "+" << num2 << "=" << num1 + num2 << endl;
        cout << "press x to exit(x) or any other key to recalculate" << endl;
        cin >> user_selection;
    }while (user_selection != 'x');
    cout << "goodbye!!!" << endl;
        return 0;
}
