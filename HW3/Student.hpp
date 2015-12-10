//
//  Student.hpp
//  HW3
//
//  Created by Bingyao Li on 10/20/15.
//  Copyright © 2015 Bingyao Li. All rights reserved.
//
#pragma once

#include <string>
#include <iostream>
#include "Person.hpp"

class Student : public Person{
public:
    Student();
    Student(const string name,const int ssn, const int age,const string gender, const string address,const int number, const double gpa, const string major, int yearOfGrad);
    Student(Student& student);
    
    void displayInfo();
protected:
    double gpa;
    string major;
    int yearOfGrad;
};

