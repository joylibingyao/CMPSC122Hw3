//
//  Employee.cpp
//  HW3
//
//  Created by Bingyao Li on 10/20/15.
//  Copyright © 2015 Bingyao Li. All rights reserved.
//


#include "Employee.hpp"

Employee::Employee():Person(){
    department = "unknown";
    job = "unknown";
    yearOfHire = 0;
}
Employee::Employee(const string name,const int ssn, const int age,const string gender, const string address,const int number,const string department, const string job,const int yearofHire):Person( name, ssn, age, gender,address, number),department(department),job(job),yearOfHire(yearOfHire){
    
}
Employee::Employee(Employee& employee){
    name = employee.name;
    ssn = employee.ssn;
    age = employee.age;
    gender = employee.gender;
    address = employee.address;
    number = employee.number;
    department = employee.department;
    job = employee.job;
    yearOfHire=employee.yearOfHire;
}
//virtual double Employee::getAnnualWages() = 0
