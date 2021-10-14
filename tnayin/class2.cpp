#include <iostream>
#include <iostream>
using namespace std;
class Human{
private:
    string name;
    int age;
public:
    Human(){
        age = 0;
        cout << "default constructor creates an instance of human " << endl;
    }
    Human(string humans_name){
        name = humans_name;
        age = 0;
        cout << " overloaded constructor creates " << name << endl;
    }
    Human(string humans_name,int humans_age){
        name = humans_name;
        age = humans_age;
        cout << "overloaded constructor creates ";
        cout << name << " of " << age << " years " << endl;
    }
    void set_name (string humans_name){
        name = humans_name;
    }
    void set_age(int humans_age){
        age = humans_age;
    }
    void introduce_self(){
        cout << " i am " + name << " and am ";
        cout << age << " years old " << endl;
    }
};
int main() {
Human first_man;
first_man.set_name("adam");
first_man.set_age(30);
Human first_woman("eva");
first_woman.set_age(28);
Human first_child("rose",1);
first_man.introduce_self();
first_woman.introduce_self();
first_child.introduce_self();
    return 0;
}
