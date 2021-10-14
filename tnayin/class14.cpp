#include <iostream>
using namespace std;
class Mammal{
public:
    void feed_baby_milk(){
        cout << "mammal: baby says glug!" << endl;
    }
};
class Reptile{
public:
    void spit_venom(){
        cout << "reptile:shoo enemy! spits venom!" << endl;
    }
};
class Bird{
public:
    void ley_eggs(){
        cout << "bird:laid my eggs,am lighter now!" << endl;
    }
};
class Platypus:public Mammal,public Bird,public Reptile{
public:
    void swim(){
        cout << "platypus: voila, i can swim!!" << endl;
    }
};
int main() {
    Platypus real_freak;
    real_freak.ley_eggs();
    real_freak.feed_baby_milk();
    real_freak.spit_venom();
    real_freak.swim();
    return 0;
}
