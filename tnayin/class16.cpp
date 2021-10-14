#include <iostream>
using namespace std;
class Fish{
public:
    virtual void swim(){
        cout << "fish swims!" << endl;
    }
};
class Tuna:public Fish{
public:
    void swim(){
        cout << "tuna swims!" << endl;
    }
};
class Carp:public Fish{
public:
    void swim(){
        cout << "carp swims!" << endl;
    }
};
void make_fish_swim(Fish& input_fish){
    input_fish.swim();
}
int main() {
    Tuna my_dinner;
    Carp my_lunch;
    make_fish_swim(my_dinner);
    make_fish_swim(my_lunch);
    return 0;
}
