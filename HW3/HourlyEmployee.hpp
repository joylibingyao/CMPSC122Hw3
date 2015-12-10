//
//  HourlyEmployee.hpp
//  HW3
//
//  Created by Bingyao Li on 10/21/15.
//  Copyright © 2015 Bingyao Li. All rights reserved.
//
#pragma once

#include <iostream>
#include <string>
#include "Employee.hpp"
using namespace std;

class HourlyEmployee: public Employee{
public:
    HourlyEmployee();
    HourlyEmployee(const string name,const int ssn, const int age,const string gender, const string address,const int number,const string department, const string job,const int yearofHire,const double hourlyRate, const int hoursworked,const int unionDues);
    HourlyEmployee(HourlyEmployee& hourlyEmployee);
    void displayInfo();
    double getAnnualWages();
protected:
    int hourlyRate;
    int hoursworked;
    int unionDues;
};