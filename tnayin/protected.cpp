#include <iostream>
using namespace std;
class Fish{
protected:
    bool fresh_water_fish;
public:
    void swim(){
        if (fresh_water_fish)
            cout << "swims in lake" << endl;
        else
            cout << "swims in sea" << endl;
    }
};
class Tuna:public Fish{
public:
    Tuna(){
        fresh_water_fish = false;
    }
};
class Carp:public Fish{
public:
    Carp(){
        fresh_water_fish = false;
    }
};
int main() {
Carp my_lunch;
Tuna my_dinner;
cout << "getting my food to swim" << endl;
cout << "lunch: ";
my_lunch.swim();
cout << "dinner: ";
my_dinner.swim();
    return 0;
}
