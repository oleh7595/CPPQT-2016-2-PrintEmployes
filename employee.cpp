#include "employee.h"
#include <printable.h>
#include <string>
#include <vector>
#include <iostream>


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

void Employee::print()
{
    std::cout << name() << std::endl;
    std::cout << address() << std::endl;
    std::cout << numberPhone() << std::endl;
    std::cout << salary() << std::endl;
    std::cout << yearStartWork() << std::endl;
}

