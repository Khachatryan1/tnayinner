#include <iostream>
using namespace std;
class Fish{
public:
    void swim(){
        cout << "fish swims!" << endl;
    }
};
class Tuna:public Fish{
public:
    void swim(){
        cout << "tuna swims!" << endl;
    }
};
void make_fish_swims(Fish& input_fish){
    input_fish.swim();
}
int main() {
    Tuna my_dinner;
    my_dinner.swim();
    make_fish_swims(my_dinner);
    return 0;
}
