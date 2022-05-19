//---------------Tour.cpp--------------

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

#include "Tour.h"
Tour::Tour() 
{
    cout << "This is the Tour constructor." << endl;
}

Tour::Tour(string id, int time, string date, string status) 
{
    Tour_ID = id;
    Tour_time = time;
    Tour_date = date;
    Tour_status = status;
}

void Tour::getStatus()
{
    cout << "The Inquiry status is  :  " << Tour_status << endl;
}

Tour :: ~Tour() 
{
    cout << "The content are getting deleted." << endl;
}