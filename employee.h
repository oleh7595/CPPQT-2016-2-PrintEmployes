#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <printable.h>
#include <string>
#include <vector>
#include <iostream>

class Employee : public Printable
{
public:
    Employee(const std::string &name, const std::string &numberPhone, const std::string &address,
             const int &salary, const int &yearStartWork);
  //  ~Employee();
    std::string name();
    void setName(const std::string &name);

    std::string numberPhone();
    void setNumberPhone(const std::string &numberPhone);

    std::string address();
    void setAddress(const std::string &address);

    int salary();
    int setSalary (const int &salary);

    int yearStartWork();
    int setYearStartWork (const int &yearStartWork);

    void print() const override;


private:
    std::string mName;
    std::string mNumberPhone;
    std::string mAddress;
    int mSalary;
    int mYearStartWork;
};

#endif // EMPLOYEE_H
