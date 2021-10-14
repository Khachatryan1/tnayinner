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
        cout << "invoking destructor, clearing up" << endl;
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
int main() {
My_string sey_hello("hello from string class");
cout << "string buffer in my_string is " << sey_hello.get_length();
cout << " characters long " << endl;
cout << "buffer contains: ";
cout << "buffer contains: " << sey_hello.get_string() << endl;
    return 0;
}
