//
//  STL.cpp
//  HW3
//
//  Created by Bingyao Li on 12/3/15.
//  Copyright © 2015 Bingyao Li. All rights reserved.
//

#include "temPeople.hpp"

template <class T>
temPeople<T>::temPeople(const T& newPeople){
    people = newPeople;
}

template <class T>
T temPeople<T>::getPeople(){
    return people;
}



 
