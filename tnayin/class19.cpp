#include <iostream>
using namespace std;
class Animal{
public:
    Animal(){
        cout << "animal constructor" << endl;
    }
    int age;
};
class Mammal:public Animal{};
class Bird:public Animal{};
class Reptile:public Animal{};
class Platypus:public Mammal,public Bird,public Reptile{
public:
    Platypus(){
        cout << "platypus constructor" << endl;
    }
};
int main() {
    Platypus duck_bill_edp;
    return 0;
}
