#include "office.h"
#include <printable.h>
#include <string>
#include <vector>
#include <iostream>

Office::Office(const std::string &name, const std::string &address,
               const int &workingArea, const int &numberOfEmployees)
{
    mName = name;
    mAddress = address;
    mWorkingArea = workingArea;
    mNumberOfEmployees = numberOfEmployees;
}

std::string Office::name()
{
    return mName;
}

void Office::setName(const std::string &name)
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

std::string Office::address()
{
    return mAddress;
}

void Office::setAddress(const std::string &address)
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

int Office::workingArea()
{
    return mWorkingArea;
}

int Office::setWorkingArea(const int &workingArea)
{
        mWorkingArea = workingArea;
}

int Office::numberOfEmployees()
{
    return mNumberOfEmployees;
}

int Office::setNumberOfEmployees(const int &numberOfEmployees)
{
        mNumberOfEmployees = numberOfEmployees;
}

// New definition of function 'print' for Office
void Office::print() const
{
    std::cout << mName << std::endl;
    std::cout<< mAddress << std::endl;
    std::cout << mWorkingArea << std::endl;
    std::cout<< mNumberOfEmployees << std::endl;
}


