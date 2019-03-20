#include<string>
#include<fstream>
#include<iostream>
#include<sstream>
#include<iomanip>
#include<vector>
#include "person.h"
#include "person.cpp"

void readData(vector<person> &employeesvect,int &size);
void writeData(vector<person> &employeesvect,int size);

void readData(vector<person> &employeesvect,int &size)
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
            employeesvect.emplace_back(p);
            size++;
        }
        file.close();
    }
}

void writeData(vector<person> &employeesvect,int size)
{
    ofstream outfile;
    outfile<<setprecision(2)<<fixed;
    outfile.open("output.txt");
    for(int i=0;i<size;i++)
    {
         outfile<<employeesvect[i].fullName()<<" "<<employeesvect[i].totalPay()<<endl;
    }
    outfile.close();
    
}

int main()
{
    int size=0;
   vector<person> employees;
    
    readData(employees,size);
    writeData(employees,size);
    system ("PAUSE");
}
