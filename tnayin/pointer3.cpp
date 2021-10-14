#include <iostream>
using namespace std;
int main() {
int age = 30;
double pi = 3.14159;
char say_yes = 'y';
int* p_int = &age;
double* p_double = &pi;
char* p_char = &say_yes;
    cout << "sizeof fundamental types -" << endl;
    cout << "sizeof(int) = " << sizeof (int) << endl;
    cout << "sizeof(double) = " << sizeof(double ) << endl;
    cout << "sizeof(char) = " << sizeof (char) << endl;

    cout << "sizeof pointers to fundamental types -" << endl;
    cout << "sizeof(p_int) = " << sizeof(p_int) << endl;
    cout << "sizeof(P_double) = " << sizeof(p_double) << endl;
    cout << "sizeof(p_char) = " << sizeof(p_char) << endl;
    return 0;
}
