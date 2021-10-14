#include <iostream>
using namespace std;
class Motor{
public:
    void switch_ignition(){
        cout << "ignition on" << endl;
    }
    void pump_fuel(){
        cout << " fuel in cylinders" << endl;
    }
    void fire_cylinders(){
        cout << "vroooom" << endl;
    }
};
class Car:private Motor{
public:
    void move(){
        switch_ignition();
        pump_fuel();
        fire_cylinders();
    }
};
int main() {
    Car my_dream_car;
    my_dream_car.move();
    return 0;
}
