#ifndef MASSAGE_H
#define MASSAGE_H

#include "Service.h"
using namespace std;

class Massage : public Service {
private:
    string appointmentTime;
    string clientType;

public:
    Massage(int dur, double price, string time);

    void setClientType(string type);

    string getDetails() const override;
    double calculateFinalPrice() const override;
    string getNotes() const override;

    void book() override;
    void book(string type) override;

    string getClientType() const;
    string getTime() const;
};

#endif
