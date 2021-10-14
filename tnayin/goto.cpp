#include <iostream>
using namespace std;
int main() {
    jump_to_point:
    int num1 = 0, num2 = 0;
    cout<<"enter two integers:"<<endl;
    cin >> num1;
    cin >> num2;
    cout << num1 << " x " << num2 <<" = "<< num1 * num2 << endl;
    cout << num1 << " + " << num2 <<" = "<< num1 + num2 << endl;
    cout << "do you wish to perform another operation (y/n)?"<<endl;
    char repeat  = 'y';
    cin >> repeat;
    if(repeat == 'y')
        goto jump_to_point;
    cout<<"goodbye!!!"<<endl;
    return 0;
}
