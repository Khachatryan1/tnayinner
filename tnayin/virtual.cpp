#include <iostream>
using namespace std;
class Simple_class{
    int a,b;
public:
    void func_do_something(){}
};
class Base{
    int a,b;
public:
    virtual void func_do_something(){}
};
int main() {
    cout << "sizeof(simple_class) = " << sizeof(Simple_class) << endl;
    cout << "sizeof(base) = " << sizeof(Base) << endl;
    return 0;
}
