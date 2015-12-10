//
//  main.cpp
//  HW3
//
//  Created by Bingyao Li on 10/20/15.
//  Copyright © 2015 Bingyao Li. All rights reserved.
//

#include <iostream>
#include <list>
#include <String>
#include <vector>
#include <memory>


#include "container.hpp"
#include "Student.hpp"
#include "Person.hpp"
#include "Employee.hpp"
#include "HourlyEmployee.hpp"
#include "SalariedEmployee.hpp"
#include "StudentEmployee.hpp"

using namespace std;


int main(int argc, const char * argv[]) {
    // insert code here...
    
        Student student1= *new Student("Joy", 010010, 21, "F", "State College", 5555555, 4.0, "Unknown", 2018);
        student1.displayInfo();
    
        HourlyEmployee hourlyEmployee1 = *new HourlyEmployee("Brian", 111111, 27, "M", "SF", 888888, "Front End", "QA", 2, 23, 300, 3);
    
        hourlyEmployee1.displayInfo();
    
        Container container = *new Container();
    
        container.push(student1);
        container.push(hourlyEmployee1);
    cout<<endl;
        container.searchPerson("Brian");
    
    
    
    
    
    
    
    return 0;
}
