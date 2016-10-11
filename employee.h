#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include "printable.h"
#include <string>

using namespace std;

class Employee : public Printable
{
public:
    std::string name;
    std::string phoneNumber;
    std::string address;
    int salary;
    int startYearWork;

    void setEmployee(const std::string &name, const std::string &phoneNumber,
                     const std::string &address, const int &salary,
                     const int &startYearWork);
};

#endif // EMPLOYEE_H
