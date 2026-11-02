#include <iostream>
using namespace std;

class Payment
{
public:
    virtual void pay()
    {
        cout << "Payment is done by cash." << endl;
    }
};

class CreditCardPayment : public Payment
{
public:
    void pay() 
    {
        cout << "Payment is done by credit card." << endl;
    }
};

class UPIpayment : public Payment
{
public:
    void pay() 
    {
        cout << "Payment is done by UPI payment." << endl;
    }
};

int main()
{
    Payment *p;

    Payment obj1;
    CreditCardPayment obj2;
    UPIpayment obj3;

    p = &obj1;
    p->pay();

    p = &obj2;
    p->pay();

    p = &obj3;
    p->pay();

    return 0;
}