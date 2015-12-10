//
//  HourlyEmployee.cpp
//  HW3
//
//  Created by Bingyao Li on 10/21/15.
//  Copyright © 2015 Bingyao Li. All rights reserved.
//

#include "HourlyEmployee.hpp"

HourlyEmployee::HourlyEmployee():Employee(){
    hourlyRate=0;
    hoursworked=0;
    unionDues=0;
}
HourlyEmployee::HourlyEmployee(const string name,const int ssn, const int age,const string gender, const string address,const int number,const string department, const string job,const int yearofHire,const double hourlyRate, const int hoursworked,const int unionDues):Employee(name,ssn, age,gender, address, number,department, job, yearofHire),hoursworked(hoursworked),hourlyRate(hourlyRate),unionDues(unionDues){
    
}

HourlyEmployee::HourlyEmployee(HourlyEmployee& hourlyEmployee){
    name = hourlyEmployee.name;
    ssn = hourlyEmployee.ssn;
    age = hourlyEmployee.age;
    gender = hourlyEmployee.gender;
    address = hourlyEmployee.address;
    number = hourlyEmployee.number;
    department = hourlyEmployee.department;
    job = hourlyEmployee.job;
    yearOfHire=hourlyEmployee.yearOfHire;
    hourlyRate=hourlyEmployee.hourlyRate;
    hoursworked=hourlyEmployee.hoursworked;
    unionDues=hourlyEmployee.unionDues;
}

double HourlyEmployee::getAnnualWages(){

    return hourlyRate*hoursworked;
}

void HourlyEmployee::displayInfo(){
    cout<<name<<" "<<ssn<<" "<<age<<" "<<gender<<" "<<address<<" "<<number<<department<<" "<<job<<" "<<yearOfHire<<" "<<hoursworked<<" "<<hourlyRate<<" "<<unionDues<<endl;
}
