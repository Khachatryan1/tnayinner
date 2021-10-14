#include <iostream>
#include <cstring>

using namespace std;
class My_string{
private:
    char* buffer;
public:
    My_string(const char* initial_input){
        if(initial_input != NULL){
            buffer = new char[strlen(initial_input)+1];
            strcpy(buffer,initial_input);
        }else
            buffer = NULL;
    }
    ~My_string(){
        cout << "invoking destructor,clearing up" << endl;
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
void use_my_string(My_string input){
    cout << "string buffer in my_string is " << input.get_length();
    cout << " characters long" << endl;
    cout << "buffer contains: " << input.get_string() << endl;
    return;
}
int main() {
    My_string sey_hello("hello from string class");
    use_my_string(sey_hello);
    return 0;
}
