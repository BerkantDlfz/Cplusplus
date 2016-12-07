#include <iostream>
using namespace std;
class Time {
public:
    Time();

    void SetTime(int, int, int);

    void PrintTime();

private:
    int hour; // 0-23
    int minute; // 0-59
    int second; // 0-59
};
Time::Time(){ hour=minute=second=0;}
void Time::SetTime(int h,int m,int s){
    if (h >= 0) {
        if (h < 24) {
            hour = h;
        } else {
            hour =0;
        }
    } else {
        hour = 0;
    }
    if (m >= 0) {
        if (m < 60) {
            minute = m;
        } else {
            minute = 0;
        }
    } else {
        minute = 0;
    }
    if (s >= 0) {
        if (s < 60) {
            second = s;
        } else {
            second = 0;
        }
    } else {
        second = 0;
    }
}
void Time::PrintTime(){
    if ((hour == 0) || (hour == 12)) {
        cout << 12;
    } else {
        cout << hour % 12;
    }
    if (minute < 10) {
        cout << ":" << "0" << minute;
    } else {
        cout << ":" << "" << minute;
    }
    if (second < 10) {
        cout << ":" << "0" << second;
    } else {
        cout << ":" << "" << second;
    }
    if (hour < 12) {
        cout << " AM" << endl;
    } else {
        cout << " PM" << endl;
    }
}


int main(){
    Time t ;
    t.PrintTime();
    t.SetTime(13,27,16) ;
    t.PrintTime();
    t.SetTime(99,99,99) ;
    t.PrintTime();
    cout << endl ;
    return 0 ;
}