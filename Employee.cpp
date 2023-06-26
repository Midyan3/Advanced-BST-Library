#include "Employee.hpp"

Employee::Employee(std::string name, int id) : name_(name), id_(id) {}

std::string Employee::getName() const
{
  return name_;
}

int Employee::getId() const
{
  return id_;
}

bool Employee::operator==(const Employee &rhs) const
{
  return id_ == rhs.id_ && name_ == rhs.name_;
}

bool Employee::operator>(const Employee &rhs)
{
  return id_ > rhs.id_;
}

bool Employee::operator<(const Employee &rhs)
{
  return id_ < rhs.id_;
}
std::ostream& operator<<(std::ostream& os, const Employee& e){
    os << e.name_ << " " << e.id_;
    return os;
}