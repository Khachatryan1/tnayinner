#include <iostream>
using namespace std;
class Monster_db{
private:
    ~Monster_db(){};
public:
    static void destroy_instance(Monster_db* p_instance){
        delete p_instance;
    }
};
int main() {
Monster_db* p_my_database = new Monster_db();
Monster_db::destroy_instance(p_my_database);
    return 0;
}
