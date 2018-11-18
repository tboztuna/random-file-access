//
// Created by Tolga Boztuna on 17.11.2018.
//

#include "Employee.h"
#include <string>
#include <iostream>
#include <sstream>

using namespace std;

Employee::Employee() {
    this->setId(0);
    this->setName("");
    this->setSalary(0);
    this->setHiredAt(0);
}

Employee::Employee(int id, string name, float salary, int hired_at) {
    this->setId(id);
    this->setName(name);
    this->setSalary(salary);
    this->setHiredAt(hired_at);
}

void Employee::setId(int id) {
    this->id = id;
}

void Employee::setName(string name) {
    this->name = name;
}

void Employee::setSalary(float salary) {
    this->salary = salary;
}

void Employee::setHiredAt(int hired_at) {
    this->hired_at = hired_at;
}

int Employee::getId() {
    return this->id;
}

string Employee::getName() {
    return this->name;
}

float Employee::getSalary() {
    return this->salary;
}

int Employee::getHiredAt() {
    return this->hired_at;
}

//method to convert integers to strings
string getIntegerStr(int number)
{
    stringstream sstrm;
    sstrm << number;
    return sstrm.str();
}

//method to convert float to strings
string getDoubleStr(float number)
{
    stringstream ss;
    ss << number;
    return ss.str();
}

string Employee::toString()
{
    string IdString = getIntegerStr(this->getId());
    string salaryString = getDoubleStr(this->getSalary());
    string hiredAtString = getIntegerStr(this->getHiredAt());

    return (" ID              : " + IdString + "\n" +
            " Name            : " + this->getName() + "\n" +
            " Salary          : " + salaryString + "\n" +
            " Hired At:       : " + hiredAtString + "\n");
}