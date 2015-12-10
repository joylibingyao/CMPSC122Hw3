//
//  Employee.hpp
//  HW3
//
//  Created by Bingyao Li on 10/20/15.
//  Copyright © 2015 Bingyao Li. All rights reserved.
//
#pragma once

#include <iostream>
#include <string>
#include "Person.hpp"
using namespace std;

class Employee:public Person{
public:
    Employee();
    Employee(const string name,const int ssn, const int age,const string gender, const string address,const int number,const string department, const string job, const int yearofHire);
    Employee(Employee& employee);
    virtual double getAnnualWages()=0;
    
protected:
    string department, job;
    int yearOfHire;
};
