#include "employee.h"
#include <printable.h>
#include <string>
#include <vector>
#include <iostream>

Employee::Employee(const std::string &name, const std::string &numberPhone, const std::string &address, const int &salary, const int &yearStartWork)
{
    mName = name;
    mNumberPhone = numberPhone;
    mAddress = address;
    mSalary = salary;
    mYearStartWork = yearStartWork;
}

std::string Employee::name()
{
    return mName;
}

void Employee::setName(const std::string &name)
{
    if (!name.empty())
    {
        mName = name;

    }
    else
    {
        std::cout << "ERROR: Invalid name" << std::endl;
    }
}

std::string Employee::numberPhone()
{
    return mNumberPhone;
}

void Employee::setNumberPhone(const std::string &numberPhone)
{
    if (!numberPhone.empty())
    {
        mNumberPhone = numberPhone;
    }
    else
    {
        std::cout << "ERROR: Invalid number phone" << std::endl;
    }
}

std::string Employee::address()
{
    return mAddress;
}

void Employee::setAddress(const std::string &address)
{
    if (!address.empty())
    {
        mAddress = address;
    }
    else
    {
        std::cout << "ERROR: Invalid address" << std::endl;
    }
}

int Employee::salary()
{
    return mSalary;
}

int Employee::setSalary(const int &salary)
{
    mSalary = salary;
}

int Employee::yearStartWork()
{
    return mYearStartWork;
}

int Employee::setYearStartWork(const int &yearStartWork)
{
    mYearStartWork = yearStartWork;
}

void Employee::print() const
{
     std::cout << mName << std::endl;
     std::cout<< mAddress << std::endl;
     std::cout<< mNumberPhone << std::endl;
     std::cout << mSalary << std::endl;
     std::cout<< mYearStartWork << std::endl;

}
