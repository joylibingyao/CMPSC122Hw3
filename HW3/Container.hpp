//
//  container.hpp
//  HW3
//
//  Created by Bingyao Li on 12/8/15.
//  Copyright © 2015 Bingyao Li. All rights reserved.
//


#include <vector>
#include "Person.hpp"
using namespace std;

class Container {
    vector<Person> list;
    
public:
    Container();
    void push(Person& p);
    void pop();
    void searchPerson(string name);
    
};


