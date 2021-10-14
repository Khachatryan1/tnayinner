#include <iostream>
#include <iostream>
using namespace std;
class President{
private:
    President(){};
    President(const President&);
    const President& operator = (const President&);
    string name;
public:
    static President& get_instance(){
        static President only_instance;
        return only_instance;
    }
    string get_name(){
        return name;
    }
    void set_name(string input_name){
        name = input_name;
    }
};
int main() {
President& only_president = President::get_instance();
only_president.set_name("Abraham Lincoln");
cout << "the name of the president is: ";
cout << President::get_instance().get_name() << endl;
    return 0;
}
