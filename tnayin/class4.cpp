#include <iostream>
#include <iostream>
using namespace std;
class Human{
private:
    int age;
    string name;
public:
    Human(string input_name = "adam",int input_age = 25)
    :name(input_name),age(input_age){
        cout << "constructor a human called " << name;
        cout << ", " << age << " years old" << endl;
    }

};
int main() {
Human first_man;
Human first_woman("eva",18);
    return 0;
}
