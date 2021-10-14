#include <iostream>
using namespace std;
class Fish{
public:
    Fish(){
        cout << "constructed fish" << endl;
    }
    virtual ~Fish(){
        cout << "destroyed fish" << endl;
    }
};
class Tuna:public Fish{
public:
    Tuna(){
        cout << "constructed tuna" << endl;
    }
    ~Tuna(){
        cout << "destroyed tuna" << endl;
    }
};
void delete_fish_memory(Fish* p_fish){
    delete p_fish;
}
int main() {
    cout << "allocating a tuna on the free store:" << endl;
    Tuna* p_tuna = new Tuna;
    cout << "deleting the tuna: " << endl;
    delete_fish_memory(p_tuna);
    cout << "instantiating a tuna on the stack:" << endl;
    Tuna my_dinner;
    cout << "automatic destruction as it goes out of scope:" << endl;

    return 0;
}
