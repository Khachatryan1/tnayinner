#include <iostream>
#include <cstring>

using namespace std;
class My_string{
private:
    char* buffer;
public:
    My_string(const char* initial_input){
        cout << "constructor: creating new my_string" << endl;
        if(initial_input != NULL){
            buffer = new char [strlen(initial_input)+1];
            strcpy(buffer,initial_input);
            cout << "buffer points to: 0x" << hex;
            cout << (unsigned int*) buffer << endl;
        }else
            buffer = NULL;
    }
    My_string(const My_string& copy_source){
        cout << "copy constructor: copying from my_string" << endl;
        if(copy_source.buffer != NULL){
            buffer = new char[strlen(copy_source.buffer)+1];
            strcpy(buffer,copy_source.buffer);
            cout << "buffer points to: 0x" << hex;
            cout << (unsigned int*)buffer << endl;
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
void Use_my_string(My_string input){
    cout << "string buffer in my_string is " << input.get_length();
    cout << "characters long" << endl;
    cout << "buffer contains: " << input.get_string() << endl;
    return;
}
int main() {
My_string say_hello ("hello from string class");
    Use_my_string(say_hello);
    return 0;
}
