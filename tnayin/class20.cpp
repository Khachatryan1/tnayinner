#include <iostream>
using namespace std;
class Fish{
public:
    virtual Fish* clone() = 0;
    virtual void swim() = 0;
};
class Tuna:public Fish{
public:
    Fish* clone(){
        return new Tuna (* this);
    }
    void swim(){
        cout << "tuna swims fast in the sea" << endl;
    }
};
class Carp:public Fish{
    Fish* clone(){
        return new Carp (*this);
    }
    void swim(){
        cout << "carp swims slow in the lake" << endl;
    }
};
int main() {
    const int array_size = 4;
    Fish* my_fishes[array_size] = {NULL};
    my_fishes[0] = new Tuna();
    my_fishes[1] = new Carp();
    my_fishes[2] = new Tuna();
    my_fishes[3] = new Carp();
    Fish* my_new_fishes[array_size];
    for(int index = 0;index < array_size;++index)
        my_new_fishes[index] = my_fishes[index] ->clone();
    for(int index = 0;index < array_size;++index)
        my_new_fishes[index] -> swim();
    for(int index = 0;index < array_size;++index)
    {
        delete my_fishes[index];
        delete my_new_fishes[index];
    }
    return 0;
}
