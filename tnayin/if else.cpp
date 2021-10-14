#include <iostream>
using namespace std;
int main() {
    enum days_of_week{
        sunday=0,
        monday,
        tuesday,
        wednesday,
        thursday,
        friday,
        saturday
    };
    cout<<"find what days of week are named after!!!"<<endl;
    cout<<"enter a number for a day (sunday =0):";
    int day = sunday;
    cin>> day;
    if(day == sunday)
        cout<<"sunday was named after the sun"<<endl;
    else if(day == monday)
        cout<<"monday was named after the moon"<<endl;
    else if(day == tuesday)
        cout<<"tuesday was named after mars"<<endl;
    else if(day == wednesday)
        cout<<"wednesday was named after mercury"<<endl;
    else if(day == thursday)
        cout<<"thursday eas named after jupiter"<<endl;
    else if(day == friday)
        cout<<"friday was named after venus"<<endl;
    else if(day == saturday)
        cout<<"saturday was named after saturn"<<endl;
    else
        cout<<"wrong input,execute again"<<endl;
    return 0;
}
