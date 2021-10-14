#include <iostream>
using namespace std;
class Fish{
public:
    void swim(){
        cout << "fish swims...!" << endl;
    }
    void swim(bool fresh_water_fish){
        if(fresh_water_fish)
            cout << "swims in lake" << endl;
        else
            cout << "swims in lake" << endl;
    }
};
class Tuna:public Fish{
public:
    void swim(){
        cout << "tuna swims real fast" << endl;
    }
};

int main() {
    Tuna my_dinner;
    cout << "getting my food to swim" << endl;
    my_dinner.swim();
    return 0;
}
