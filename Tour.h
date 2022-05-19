//---------------Tour.h--------------

#include<iostream>
using namespace std;

class Tour {
private:

    string Tour_ID;
    int    Tour_time;
    string Tour_date;
    string Tour_status;

public:

    Tour();
    Tour(string id, int time, string date, string status);
    void getStatus();
    ~Tour();
};