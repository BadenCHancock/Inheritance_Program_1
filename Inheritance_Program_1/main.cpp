#include <iostream>
#include "ProductionWorker.h"
int main(int argc, char* argv[])
{
    ProductionWorker pw(1, 1.07, "Temu Worker", 12345, "04/15/2023");

    std::cout << "Employee Name: " << pw.getEmployeeName() << std::endl;
    std::cout << "Employee Number: " << pw.getEmployeeNumber() << std::endl;
    std::cout << "Hire Date: " << pw.getHireDate() << std::endl;
    std::cout << "Shift: " << pw.getShift() << std::endl;
    std::cout << "Hourly Rate: $" << pw.getRate() << std::endl;

    return 0;
}
