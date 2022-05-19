//---------------Inquiry.cpp--------------

#include <iostream>
#include"Inquiry.h"
#include"Seller.h"
#include"Customer.h"
using namespace std;

Inquiry::Inquiry() {

    cout << "This is the Inquiry constructor." << endl;
}

Inquiry::Inquiry(string id, string descrip, string date, string status, Customer* cust, Seller* sell) {

    Inquiry_ID = id;
    Inquiry_Description = descrip;
    Inquiry_date = date;
    Inq_status = status;

    pcustomer = cust;
    pseller = sell;

}

string Inquiry::getStatus() {

    cout << "The Inquiry status is  :  " << Inq_status << endl;

}

void Inquiry::displayInquiries() {
	cout << " Inquiry ID " << Inquiry_ID << endl;
}