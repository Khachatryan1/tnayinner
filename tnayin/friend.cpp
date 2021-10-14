#include <iostream>
#include <string>
using namespace std;
class Human{
private:
    string name;
    int  age;
    friend void display_age(const Human& person);

public:
    Human(string input_name,int input_age){
        name = input_name;
        age = input_age;
    }
    void display_age(const Human& person){
        cout << person.age << endl;
    }
};
int main() {
Human first_man("adam",25);
cout << "accessing private member age via friend: ";
display_age(first_man);
    return 0;
}
