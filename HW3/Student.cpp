//
//  Student.cpp
//  HW3
//
//  Created by Bingyao Li on 10/20/15.
//  Copyright © 2015 Bingyao Li. All rights reserved.
//

#include "Student.hpp"

Student::Student():Person(){
    
    gpa=0;
    major = "unknown";
    yearOfGrad = 0;

    
}

Student::Student(const string name,const int ssn, const int age,const string gender, const string address,const int number, const double gpa, const string major, int yearOfGrad):Person( name, ssn, age, gender,address, number),gpa(gpa),major(major),yearOfGrad(yearOfGrad){
    
    
}
Student::Student(Student& student){
    name = student.name;
    ssn = student.ssn;
    age = student.age;
    gender = student.gender;
    address = student.address;
    number = student.number;
    gpa = student.gpa;
    major = student.major;
    yearOfGrad = student.yearOfGrad;
}
void Student::displayInfo(){
    cout<<name<<" "<<ssn<<" "<<age<<" "<<gender<<" "<<address<<" "<<number<<gpa<<" "<<major<<" "<<yearOfGrad<<" "<<endl;
}



