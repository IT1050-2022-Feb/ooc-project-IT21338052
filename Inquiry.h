//---------------Inquiry.h--------------

class Inquiry {

private:
    string Inquiry_ID;
    string Inquiry_Description;
    string Inquiry_date;
    string Inq_status;
    Customer* pcustomer;
    Seller* pseller;

public:

    Inquiry();
    Inquiry(string id, string descrip, string date, string status, Customer* cust, Seller* sell);
    string getStatus();    
    void displayInquiries();
};