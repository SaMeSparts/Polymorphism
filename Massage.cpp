#include "Massage.h"
using namespace std;

Massage::Massage(int dur, double price, string time)
    : Service("Personalized therapeutic massage", dur, price),
      appointmentTime(time), clientType("New") {}

void Massage::setClientType(string type) {
    clientType = type;
}

string Massage::getClientType() const {
    return clientType;
}

string Massage::getTime() const {
    return appointmentTime;
}

string Massage::getDetails() const {
    return "Service: " + serviceName + "\nDuration: " + to_string(duration) +
           " minutes\nBase Price: $" + to_string((int)basePrice) +
           "\nTime: " + appointmentTime;
}

double Massage::calculateFinalPrice() const {
    double finalPrice = basePrice;
    if (duration > 60) finalPrice += 200;
    if (clientType == "Returning") finalPrice -= finalPrice * 0.10;
    return finalPrice;
}

string Massage::getNotes() const {
    string notes;
    if (duration > 60)
        notes += "Note: Duration exceeds 60 minutes. Surcharge applied: $200\n";
    if (clientType == "Returning")
        notes += "Note: Returning client discount applied: 10%\n";
    return notes;
}

void Massage::book() {
    clientType = "New";
}

void Massage::book(string type) {
    clientType = type;
}
