#include <iostream>
#include <string>
#include <cstring>

using namespace std;
int main() {
cout << "enter your name:";
string name;
cin >> name;
int chars_to_allocate = name.length() +1;
char* copy_of_name = new char[chars_to_allocate];
strcpy(copy_of_name,name.c_str());
cout << "dynamically allocated buffer contains:" << copy_of_name << endl;
delete[]copy_of_name;
    return 0;
}
