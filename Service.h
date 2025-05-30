#include <iostream>
#include <string>
using namespace std;
#ifndef SERVICE_H
#define SERVICE_H


class Service 
{
protected:
    string serviceName;
    int duration;
    double basePrice;
public:
   Service(string name, int dur, double price);
    virtual string getDetails() const = 0;
    virtual double calculateFinalPrice() const = 0;
    virtual string getNotes() const = 0;
    virtual void book() = 0;                    
    virtual void book(string type) = 0;         
    virtual ~Service() {}
};

#endif