#include <iostream>
using namespace std;
int main() {
const int nums_to_cal = 9;
cout << "this program will calculate" << nums_to_cal << "fibonacci numbers at a time" << endl;
int num1 = 0,num2 = 1;
char want_more ='\0';
cout << num1 << " " << num2 << " ";
do{
    for(int index = 0; index < nums_to_cal;++index){
        cout << num1 + num2 << " ";
        int num2_temp = num2;
        num2 = num1 + num2;
        num1 =num2_temp;
    }
    cout << endl << "do you want more numbers (y/n)?";
    cin >> want_more;
} while (want_more == 'y');
cout << "goodbye!!" << endl;
    return 0;
}
