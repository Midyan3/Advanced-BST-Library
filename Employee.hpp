#ifndef EMPLOYEE_
#define EMPLOYEE_

#include<iostream>
#include<string>

class Employee
{
public:
  Employee(std::string name, int id);
  std::string getName() const;
  int getId() const;
  
  //All comparison operators compare Employee IDs
  bool operator==(const Employee &rhs) const;
  bool operator>(const Employee &rhs);
  bool operator<(const Employee &rhs);
  friend std::ostream& operator<<(std::ostream& os, const Employee& e); 
private:
  std::string name_;
  int id_;
};

#endif 