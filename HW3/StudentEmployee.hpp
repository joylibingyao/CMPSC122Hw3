//
//  StudentEmployee.hpp
//  HW3
//
//  Created by Bingyao Li on 10/22/15.
//  Copyright © 2015 Bingyao Li. All rights reserved.
//
#pragma once

#include <iostream>
#include <string>
#include "HourlyEmployee.hpp"
#include "Student.hpp"

using namespace std;

class StudentEmployee:public HourlyEmployee, public Student{
    
public:
    StudentEmployee();
    StudentEmployee(const Student& student,const HourlyEmployee& hourlyEmployee);
    StudentEmployee(StudentEmployee& studentEmployee);
    void displayInfo();


    
};
