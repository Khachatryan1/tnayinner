#include <iostream>
using namespace std;
int main() {
    enum days_ot_week{
        sunday = 0,
        monday,
        tuesday,
        wednesday,
        thursday,
        friday,
        saturday
    };
    cout<<"find what days of the week are named after!!"<<endl;
    cout<<"enter a number for a day (sunday = 0):";
    int day = sunday;
    cin>>day;
    switch (day){
        case sunday:
            cout<<"sunday was named after the sun"<<endl;
            break;
        case monday:
            cout<<"monday was named after the moon"<<endl;
            break;
        case tuesday:
            cout<<"tuesday was named after the mars"<<endl;
            break;
        case wednesday:
            cout<<"wednesday was named after the mercury"<<endl;
            break;
        case thursday:
            cout<<"thursday was named after the jupiter"<<endl;
            break;
        case friday:
            cout<<"friday was named after the venus"<<endl;
            break;
        case saturday:
            cout<<"saturday was named after the saturn"<<endl;
            break;
        default:
            cout<<"wrong input,execute again"<<endl;
            break;
    }
    return 0;
}
