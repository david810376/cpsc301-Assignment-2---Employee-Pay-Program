//
//  person.cpp
//  cpsc301 assignment
//
//  Created by Lee Yi Wei on 2019/2/21.
//  Copyright © 2019 Lee Yi Wei. All rights reserved.
//
#include<iostream>
#include "person.h"
using namespace std;

person::person()
{
    
}

void person::setLastName(string lName)
{
    lastname=lName;
}
string person::getLastName()
{
    return lastname;
}

void person::setFirstName(string fName)
{
    firstname=fName;
}
string person::getFirstName()
{
    return firstname;
}

void person::setPayRate(float rate)
{
    payRate=rate;
}
float person::getPayRate()
{
    return payRate;
}

void person::setHoursWorked(float hours)
{
    hoursWorked=hours;
}
float person::getHoursWorked()
{
    return hoursWorked;
}

float person::totalPay()
{
    return hoursWorked*payRate;
}

string person::fullName()
{
    return firstname+" "+lastname;
}

