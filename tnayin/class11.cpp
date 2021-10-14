#include <iostream>
using namespace std;
class Fish_dummy_member{
public:
    Fish_dummy_member(){
        cout << "fish_dummy_member constructor" << endl;
    }
    ~Fish_dummy_member(){
        cout << "fish_dummy_member destructor" << endl;
    }
};
class Fish{
protected:
    Fish_dummy_member dummy;
public:
    Fish(){
        cout << "fish constructor" << endl;
    }
    ~Fish(){
        cout << "fish destructor" << endl;
    }
};
class Tuna_dummy_member{
public:
    Tuna_dummy_member(){
        cout << "tuna_dummy_member constructor" << endl;
    }
    ~Tuna_dummy_member(){
        cout << "tuna_dummy_member destructor" << endl;
    }
};
class Tuna:public Fish{
private:
    Tuna_dummy_member dummy;
public:
    Tuna(){
        cout << "tuna constructor" << endl;
    }
    ~Tuna(){
        cout << "tuna destructor" << endl;
    }
};
int main() {
    Tuna my_dinner;
    return 0;
}
