#include "ProductionWorker.h"

ProductionWorker::ProductionWorker(int s, double r, std::string eName, int eNumber, std::string dayHired)
{
    shift = s;
    rate = r;
    employeeName = eName;
    employeeNumber = eNumber;
    setHireDate(dayHired);
}
