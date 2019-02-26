//
//  person.h
//  cpsc301 assignment
//
//  Created by Lee Yi Wei on 2019/2/21.
//  Copyright © 2019 Lee Yi Wei. All rights reserved.
//

#ifndef person_h
#define person_h

#include <string>
using namespace std;

class person{
private:
    string lastname;
    string firstname;
    float payRate;
    float hoursWorked;
public:
    person();
    void setLastName(string lName);
    string getLastName();
    void setFirstName(string fName);
    string getFirstName();
    void setPayRate(float rate);
    float getPayRate();
    void setHoursWorked(float hours);
    float getHoursWorked();
    float totalPay();
    string fullName();
};

#endif /* person_h */
