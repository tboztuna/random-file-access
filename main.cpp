//
//  main.cpp
//  random_file_access
//
//  Created by Tolga Boztuna on 15.11.2018.
//  Copyright © 2018 Tolga Boztuna. All rights reserved.
//

/*
 
 write a program using a class that has data members ıd#,name, salary, year_hıred. this program will
 
 1) write 10 blank records to a random access file. you enter data for 4 of these records. [√]

 2) allow the user to output the name, salary, hire_date for a selected record [√]
 
 3) allow the user to change the name, salary, or hire_date for a selected record.
 
 4) allow the user to input a complete record to replace one of the blank records.
 
 note: the record number is the id number. this should be 1 - 10.
 
 */

#include <iostream>
#include <fstream>
#include <string>
#include "Employee.h"

#define FILENAME "employees.dat"

using namespace std;

const int MAX_RECORD_COUNT = 10;
const int MAX_INSERTABLE_DATA_BY_USER = 4;


bool readFile(fstream&, Employee&);
void printList(fstream&);
void init(fstream&);
Employee getEmployee(int, fstream&);
Employee updateEmployee(Employee&, fstream&);

int readInt(istream&);
string readStr(istream&);
float readFloat(istream&);

template<typename T>

/**
 * Template function to print object data.
 *
 * @tparam T
 * @param obj
 */
void displayData(T& obj)
{
    cout << "\n" << obj.toString() << "\n";
}

/**
 * Main func.
 *
 * @param argc
 * @param argv
 * @return
 */
int main(int argc, const char * argv[]) {

    fstream binaryFs; // output stream obj

    binaryFs.open(FILENAME, ios::out | ios::binary);

    init(binaryFs);

    binaryFs.close();

    int option = 0;
    while (option != -1) {

        cout << "Please select the option from the list:" << endl;
        cout << "[1] Print a record." << endl;
        cout << "[2] Update a record." << endl;
        cout << "[-1] Exit." << endl;
        cin >> option;

        int employeeId;

        switch (option) {
            case 1: {
                cout << "Enter the employee id: " << endl;
                cin >> employeeId;

                cout << "Searching for the employee." << endl;
                Employee emp = getEmployee(employeeId, binaryFs);

                cout << "---- Showing data for the employee " << employeeId  << " ----" << endl;
                displayData(emp);
                cout << "--------------------------------------------" << endl;
                break;
            }

            case 2: {
                char yesOrNo = 'n';

                cout << "Enter the employee id: " << endl;
                cin >> employeeId;

                cout << "Searching for the employee." << endl;
                Employee emp = getEmployee(employeeId, binaryFs);

                cout << "Would you like to update  [name] of the employee? [y/n]" << endl;
                cin >> yesOrNo;

                if (yesOrNo == 'y') {
                    cout << "Enter a new name: " << endl;
                    emp.setName(readStr(cin));
                    cout << "[name] atrribute has been successfully updated." << endl;
                }

                cout << "Would you like to update  [salary] attribute of the employee? [y/n]" << endl;
                cin >> yesOrNo;

                if (yesOrNo == 'y') {
                    cout << "Enter a new salary: " << endl;
                    emp.setSalary(readFloat(cin));
                    cout << "[salary] atrribute has been successfully updated." << endl;
                }

                cout << "Would you like to update [hired_at] attribute of the employee? [y/n]" << endl;
                cin >> yesOrNo;

                if (yesOrNo == 'y') {
                    cout << "Enter a new hire year: " << endl;
                    emp.setHiredAt(readInt(cin));
                    cout << "[hired_at] atrribute has been successfully updated." << endl;
                }

                Employee employee = updateEmployee(emp, binaryFs);

                cout << "---- Showing updated data for the employee " << employeeId  << " ----" << endl;
                displayData(employee);
                cout << "--------------------------------------------" << endl;

                break;
            }

            default:
                break;
        };

    }

    return 0;
}

/**
 * Gets employee data by id.
 *
 * @param id
 * @param binaryFS
 * @return
 */
Employee getEmployee(int id, fstream& binaryFS)
{
    binaryFS.open(FILENAME, ios::in | ios::binary);

    Employee empInput;

    int byteToBegineReading = (id - 1) * sizeof(Employee);

    binaryFS.seekg(byteToBegineReading);//position pointer at the correct record
    binaryFS.read(reinterpret_cast<char*> (&empInput), sizeof(Employee));
    binaryFS.close();

    return empInput;
}

/**
 * Updates employee data by id.
 *
 * @param employee
 * @param binaryFs
 * @return
 */
Employee updateEmployee(Employee &employee, fstream& binaryFs)
{
    binaryFs.open(FILENAME, ios::in | ios::out | ios::binary);

    int byteToBeginWriting = (employee.getId() - 1) * sizeof(Employee);


    binaryFs.seekp(byteToBeginWriting);
    binaryFs.write(reinterpret_cast<char*> (&employee), sizeof(Employee));
    binaryFs.close();

    return employee;
}

/**
 * Prints the whole list.
 *
 * @param binaryFs
 */
void printList(fstream &binaryFs)
{
    // input object
    Employee empInput;

    binaryFs.open(FILENAME, ios::in | ios::binary);
    cout << "\n ------------ Employee Data ------------";

    bool eof = readFile(binaryFs, empInput);
    while (!eof)
    {
        displayData(empInput);
        eof = readFile(binaryFs, empInput);
    }
    binaryFs.close();
}

/**
 * Initizalize application.
 *
 * @param binaryFs
 */
void init(fstream &binaryFs)
{
    int counter = 0;
    while (counter < MAX_RECORD_COUNT) {

        auto *emp = new Employee();
        int employeeId = counter+1;
        emp->setId(employeeId);

        // open file for output

        if (counter < MAX_INSERTABLE_DATA_BY_USER) {

            cout << "Enter name for employee with the id " << employeeId << ":" << endl;
            emp->setName(readStr(cin));

            cout << "Enter salary for employee with the id " << employeeId << ":" << endl;
            emp->setSalary(readFloat(cin));

            cout << "Enter hire date for employee with the id " << employeeId << ":" << endl;
            emp->setHiredAt(readInt(cin));

        } else {
            cout << "Inserting blank data for employee with the id " << employeeId << "..." << endl;
            cout << "Inserted..." << endl;
        }

        // write employee into the file
        binaryFs.write((char*) emp, sizeof(Employee));

        free(emp);
        counter++;
    }

}

/**
 *
 * @param binaryFs
 * @param empInput
 * @return
 */
bool readFile(fstream& binaryFs, Employee& empInput)
{
    binaryFs.read((char*) (&empInput), sizeof(Employee));

    if (binaryFs)
        return false;

    return true;
}

/**
 * Reads integer from the stream.
 *
 * @param stream
 * @return
 */
int readInt(std::istream& stream)
{
    int i;
    stream >> i; // Cross your fingers this doesn't fail
    return i;
}

/**
 * Reads float from the stream.
 *
 * @param stream
 * @return
 */
float readFloat(std::istream& stream)
{
    float i;
    stream >> i; // Cross your fingers this doesn't fail
    return i;
}

/**
 * Reads string from the stream.
 *
 * @param stream
 * @return
 */
string readStr(std::istream& stream)
{
    string i;
    stream >> i; // Cross your fingers this doesn't fail
    return i;
}
