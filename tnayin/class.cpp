#include <iostream>
#include <string>
using namespace std;
class Human{
private:
    string name;
    int age;
public:
    void set_name(string humans_name){
        name = humans_name;
    }
    void set_age(int humans_age){
        age = humans_age;
    }
    void introduce_self(){
        cout << "i am " + name << " and am ";
        cout << age << " years old" << endl;
    }
};
int main() {
Human first_man;
first_man.set_name("adam");
first_man.set_age(30);
Human first_woman;
first_woman.set_name("eva");
first_woman.set_age(28);
first_man.introduce_self();
first_woman.introduce_self();
    return 0;
}
