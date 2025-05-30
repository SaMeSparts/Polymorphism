#include <iostream>
#include "Massage.h"
#include "Service.h"
using namespace std;

int main() {

    Service* service1 = new Massage(75, 1400, "3:00 PM");
    service1->book(); 

    cout << service1->getDetails() << endl;
    cout << "Note: Duration exceeds 60 minutes. Surcharge\napplied: $200" << endl;
    cout << "Final Price: $" << service1->calculateFinalPrice() << endl;
    cout << "Booking Confirmed\n=========================================\n";


    Service* service2 = new Massage(60, 1200, "4:00 PM");
    service2->book("Returning");

    cout << service2->getDetails() << endl;
    cout << "Client Type: Returning Client" << endl;
    cout << "Note: Returning client discount applied: 10%" << endl;
    cout << "Final Price: $" << service2->calculateFinalPrice() << endl;
    cout << "Booking Confirmed" << endl;

    delete service1;
    delete service2;
    return 0;
}
