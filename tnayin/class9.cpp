#include <iostream>
using namespace std;
class Fish{
private:
    bool fresh_water_fish;
public:
    Fish(bool is_fresh_water):fresh_water_fish(is_fresh_water){}
    void swim(){
        if(fresh_water_fish)
            cout << "swims in lake" << endl;
        else
            cout << "swims in sea" << endl;
    }
};
class Tuna:public Fish{
public:
    Tuna(): Fish(false){}
    void swim(){
        cout << "tuna swims real fast" << endl;
    }
};
class Carp:public Fish{
public:
    Carp(): Fish(true){}
    void swim(){
        cout << "carp swims real slow" << endl;
        Fish::swim();
    }
};
int main() {
    Carp my_lunch;
    Tuna my_dinner;
    cout << "getting my food to swim" << endl;
    cout << "lunch: " ;
    my_lunch.swim();
    cout << "dinner: ";
    my_dinner.swim();
    return 0;
}
