#pragma once
#include <string>

#include "Employee.h"

class ProductionWorker : public Employee
{
private:
    int shift;
    double rate;
public:
    int getShift() {return  shift;};
    double getRate() {return rate;};
    void setShift(int shift){this->shift=shift;};
    void setRate(double rate){this->rate=rate;};
    ProductionWorker(int s, double r, std::string eName, int eNumber, std::string dayHired);
};
