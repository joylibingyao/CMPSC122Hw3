//
//  container.cpp
//  HW3
//
//  Created by Bingyao Li on 12/8/15.
//  Copyright © 2015 Bingyao Li. All rights reserved.
//

#include "container.hpp"

Container::Container(){
    cout<<"container created"<<endl;
}

void Container::searchPerson(string name){
    for (int i=0; i<list.size(); i++ ) {
        if (list[i].getName() == name) {
            list[i].displayInfo();
        }
        
    }
}

void Container::push(Person& p){
    list.push_back(p);
}

void Container::pop(){
    list.pop_back();
}
