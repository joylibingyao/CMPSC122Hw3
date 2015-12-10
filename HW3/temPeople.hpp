//
//  SLL.hpp
//  122_notes_10-20
//
//  Created by Bingyao Li on 11/20/15.
//  Copyright © 2015 Bingyao Li. All rights reserved.
//
#include <iostream>
#pragma once
#include <cassert>
#include <vector>
#include <cstdlib>
#include <string>
#include <stdexcept>

using namespace std;

struct T{
    string getName();
};


template <class T>
class temPeople {
private:
    T * people;
    
public:
    temPeople(const T& newPeople);
    T getPeople();
    void displayInfo(const T&);
    
};

