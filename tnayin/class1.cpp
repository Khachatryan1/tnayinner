#include <iostream>
using namespace std;
class Human{
private:
    int age;
public:
    void set_age(int input_age){
        age = input_age;
    }
    int get_age(){
        if(age > 30)
            return (age - 2);
        else
            return age;
    }
};
int main() {
Human first_man;
first_man.set_age(35);
Human first_woman;
first_woman.set_age(22);
cout << "age of first_man " << first_man.get_age() << endl;
cout << "age of first_woman" << first_woman.get_age() << endl;

    return 0;
}
