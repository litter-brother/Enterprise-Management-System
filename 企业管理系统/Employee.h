#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class Employee
{
    int id;
    string name;
    bool gender;
    int age;
public:
    Employee(string name,bool gender,int age);
    Employee(int id,string name,bool gender,int age);
    int get_id(void);
    bool get_gender(void);
    string get_name(void);
    int get_age(void);
    void set_age(int age);
    void set_name(string name);
    void set_gender(bool sex);
    void save_emp(void);
};




#endif//EMPLOYEE_H
