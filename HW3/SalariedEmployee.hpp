//
//  SalariedEmployee.hpp
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

class SalariedEmployee:public Employee{
public:
    SalariedEmployee();
    SalariedEmployee(const string name,const int ssn, const int age,const string gender, const string address,const int number,const string department, const string job, const int yearofHire, const double annualSalary );
    SalariedEmployee(SalariedEmployee& salariedEmployee);
    double getAnnualWages();
    
protected:
    int annualSalary;
};