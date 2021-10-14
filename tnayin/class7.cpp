#include <iostream>
#include <cstring>

using namespace std;
class My_string{
private:
    char* buffer;
public:
    My_string(const char* initial_input){
        if(initial_input != NULL){
            buffer = new char [strlen(initial_input)+1];
            strcpy(buffer,initial_input);
        }else
            buffer = NULL;
    }
    My_string(const My_string& copy_source){
        if(copy_source.buffer != NULL){
            buffer = new char [strlen(copy_source.buffer)+1];
            strcpy(buffer,copy_source.buffer);
        }else
            buffer = NULL;
    }
    ~My_string(){
        if(buffer != NULL)
            delete [] buffer;
    }
    int get_length(){
        return strlen(buffer);
    }
    const char* get_string(){
        return buffer;
    }
};
class Human{
    int age;
    bool gender;
    My_string name;
public:
    Human(const My_string& input_name,int input_age,bool input_gender)
    : name(input_name),age(input_age),gender(input_gender){}
    int grt_age(){
        return age;
    }
};
int main() {
My_string first_man("adam");
My_string first_woman("eva");
    cout << "sizeof(my_string) = " << sizeof(My_string) << endl;
    cout << "sizeof(first_man) = " << sizeof (first_man) << endl;
    cout << "sizeof(first_woman) = " << sizeof(first_woman) << endl;
    Human first_male_human(first_man,25,true);
    Human first_female_human(first_woman,18, false);
    cout << "sizeof(human) = " << sizeof (Human) << endl;
    cout << "sizeof (first_male_human) = " << sizeof(first_male_human) << endl;
    cout << "sizeof(first_female_human) = " << sizeof(first_female_human) << endl;
    return 0;
}
