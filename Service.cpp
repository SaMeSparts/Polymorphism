#include <iostream>
#include <string>
using namespace std;
#include "Service.h"

Service::Service(string name, int dur, double price)
    : serviceName(name), duration(dur), basePrice(price) {}

