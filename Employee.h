//
// Created by Tolga Boztuna on 17.11.2018.
//

#ifndef RANDOM_FILE_ACCESS_EMPLOYEE_H
#define RANDOM_FILE_ACCESS_EMPLOYEE_H

#endif //RANDOM_FILE_ACCESS_EMPLOYEE_H

#include <string>

using namespace std;

class Employee {

private:
    int id, hired_at;
    string name;
    float salary;

public:
    /** Constructors **/
    Employee();
    Employee(int id, string name, float salary, int hired_at);

    /** Setters **/

    void setId(int id);
    void setName(string name);
    void setSalary(float salary);
    void setHiredAt(int hired_at);

    /** Getters **/
    int getId();
    string getName();
    float getSalary();
    int getHiredAt();

    /** MEMBER FUNCTIONS **/
    string toString();
};
