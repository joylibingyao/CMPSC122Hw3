//
//  SalariedEmployee.cpp
//  HW3
//
//  Created by Bingyao Li on 10/21/15.
//  Copyright © 2015 Bingyao Li. All rights reserved.
//

#include "SalariedEmployee.hpp"

SalariedEmployee::SalariedEmployee():Employee(){
    annualSalary=0;
}
SalariedEmployee::SalariedEmployee(const string name,const int ssn, const int age,const string gender, const string address,const int number,const string department, const string job, const int yearofHire, const double annualSalary ):Employee(name,ssn, age,gender, address, number,department, job, yearofHire),annualSalary(annualSalary){
    
}
SalariedEmployee::SalariedEmployee(SalariedEmployee& salariedEmployee){
    name = salariedEmployee.name;
    ssn = salariedEmployee.ssn;
    age = salariedEmployee.age;
    gender = salariedEmployee.gender;
    address = salariedEmployee.address;
    number = salariedEmployee.number;
    department = salariedEmployee.department;
    job = salariedEmployee.job;
    yearOfHire=salariedEmployee.yearOfHire;
    annualSalary=salariedEmployee.annualSalary;
}
double SalariedEmployee::getAnnualWages(){
    return annualSalary;
}