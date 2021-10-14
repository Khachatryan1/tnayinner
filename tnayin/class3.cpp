#include <iostream>
#include <iostream>
using namespace std;
class Human{
private:
    string name;
    int age;
public:
    Human(string humans_name,int humans_age){
        name = humans_name;
        age = humans_age;
        cout << "overloaded constructor creates " << name;
        cout << " of age " << age << endl;
    }
    void introduces_self(){
        cout << "i am " + name << " and am ";
        cout << age << " years old " << endl;
    }
};
int main() {
Human first_man("adam",30);
Human first_woman("eva",28);
first_man.introduces_self();
first_woman.introduces_self();
    return 0;
}
