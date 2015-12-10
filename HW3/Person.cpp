//
//  Person.cpp
//  HW3
//
//  Created by Bingyao Li on 10/20/15.
//  Copyright © 2015 Bingyao Li. All rights reserved.
//


#include "Person.hpp"
using namespace std;

Person::Person()
{
    name = "unknown";
    ssn=0;
    age =0;
    gender="unknown";
    address = "unknown";
    number =0;
    
}

Person::Person(const string name, const int ssn, const int age, const string gender, const string address, const int number): name(name),ssn(ssn),age(age),gender(gender),address(address),number(number){
    
}

Person::Person(const Person& p){
    name = p.name;
    ssn = p.ssn;
    age = p.age;
    gender = p.gender;
    address = p.address;
    number = p.number;
}
string Person::getName(){
    return name;
}
void Person::displayInfo(){
    cout<<"Display infomation: "<<endl;
    cout<<name<<" "<<ssn<<" "<<age<<" "<<gender<<" "<<address<<" "<<number<<endl;
}

