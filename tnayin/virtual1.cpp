#include <iostream>
using namespace std;
class Fish{
public:
    virtual void swim() = 0;
};
class Tuna:public Fish{
public:
    void swim(){
        cout << "tuna swims fast in the sea!" << endl;
    }
};
class Carp:public Fish{
    void swim(){
        cout << "carp swims slow in the lake!" << endl;
    }
};
void make_fish_swim(Fish& input_fish){
    input_fish.swim();
}
int main() {
    Carp my_lunch;
    Tuna my_dinner;
    make_fish_swim(my_lunch);
    make_fish_swim(my_dinner);
    return 0;
}
