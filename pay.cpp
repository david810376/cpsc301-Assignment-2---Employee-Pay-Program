#include<string>
#include<fstream>
#include<iostream>
#include<sstream>
#include<iomanip>
#include "person.h"
#include "person.cpp"



void readData(person employees[],int &size);
void writeData(person employees[],int size);

void readData(person employees[],int &size)
{
    string lname;
    string fname;
    float payRate,workhours;
    ifstream file;
    file.open("input.txt");
    if(file.fail())
    {
        cout<<"Can not open the file"<<endl;
    }
    else{
        while(file>>fname>>lname>>workhours>>payRate)
        {
            person p;
            p.setFirstName(fname);
            p.setLastName(lname);
            p.setHoursWorked(workhours);
            p.setPayRate(payRate);
            employees[size]=p;
            size++;
        }
        file.close();
    }
}

void writeData(person employees[],int size)
{
    ofstream outfile;
    outfile<<setprecision(2)<<fixed;
    outfile.open("output.txt");
    for(int i=0;i<size;i++)
    {
        outfile<<employees[i].fullName()<<" "<<employees[i].totalPay()<<endl;
    }
    outfile.close();
    
}

int main()
{
    int size=0;
    person employees[20];
    
    readData(employees,size);
    writeData(employees,size);
    system ("PAUSE");
}
