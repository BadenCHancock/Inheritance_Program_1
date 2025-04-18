#pragma once
#include <string>

class Employee
{
private:
    std::string hireDate;
public:
    //I decided to make employee name and number protected so that it has a level of security
    //however, I made hireDate private and used the setter to set it in the constructor
    //I decided against using a setter for name and number because those shouldn't change
    int getEmployeeNumber(){return employeeNumber;};
    std::string getHireDate(){return hireDate;};
    void setHireDate(std::string newHireDate){hireDate = newHireDate;};
    std::string getEmployeeName(){return employeeName;};
protected:
    std::string employeeName;
    int employeeNumber; 
};
