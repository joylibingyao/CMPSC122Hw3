//
//  Person.hpp
//  HW3
//
//  Created by Bingyao Li on 10/20/15.
//  Copyright © 2015 Bingyao Li. All rights reserved.
//
#pragma once

#include <string>
#include <iostream>


using namespace std;

class Person {
protected:
    string name,gender,address;
    int ssn,age,number;
public:
    Person();
    Person(const string name, const int ssn, const int age, const string gender, const string address, const int number);
    Person(const Person& p);
    string getName();
    void displayInfo();
};
