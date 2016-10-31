#ifndef OFFICE_H
#define OFFICE_H
#include <printable.h>
#include <string>
#include <vector>
#include <iostream>

class Office : public Printable
{
public:
    Office(const std::string &name, const std::string &address,
           const int &workingArea, const int &numberOfEmployees);
//  ~Office();
  std::string name();
  void setName(const std::string &name);

  std::string address();
  void setAddress(const std::string &address);

  int workingArea();
  int setWorkingArea (const int &workingArea);

  int numberOfEmployees();
  int setNumberOfEmployees (const int &numberOfEmployees);

  void print() const override;


private:
  std::string mName;
  std::string mAddress;
  int mWorkingArea;
  int mNumberOfEmployees;
};

#endif // OFFICE_H
