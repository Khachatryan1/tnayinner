#include <iostream>
using namespace std;
class Mator{
public:
    void switch_ignition(){
        cout << "ignition on" << endl;
    }
    void pump_fuel(){
        cout << "fuel in cylinders" << endl;
    }
    void fire_cylinders(){
        cout << "vrooom" << endl;
    }
};
class Car:protected Mator{
public:
    void move(){
        switch_ignition();
        pump_fuel();
        fire_cylinders();
    }
};
class Super_car:protected Car{
public:
    void move(){
        switch_ignition();
        pump_fuel();
        fire_cylinders();
        fire_cylinders();
        fire_cylinders();
    }
};
int main() {
    Super_car my_dream_car;
    my_dream_car.move();
    return 0;
}
