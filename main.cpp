#include <iostream>
#include "Massage.h"
#include "Service.h"
using namespace std;



int main() {
    Service* service = new Massage(60, 1200, "2:00 PM");
    service->book();

    cout << service->getDetails() << endl;
    cout << "Precio final: $" << service->calculateFinalPrice() << endl;
    cout << service->getNotes() << endl;
    service->book("Returning");

    cout << service->getDetails() << endl;
    cout << "Precio final: $" << service->calculateFinalPrice() << endl;
    cout << service->getNotes() << endl;

    delete service;
    return 0;
}