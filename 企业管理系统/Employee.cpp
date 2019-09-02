#include <iostream>
#include "Employee.h"

using namespace std;

Employee::Employee(string name,bool gender,int age)
{
	int arr[2] = {};
    fstream fs("id.txt",ios::in);
    if(!fs.good())
    {
    	arr[0]=101;arr[1]=1001;
    }
    else
    {
		fs>>arr[0];fs>>arr[1];
		fs.close();
    }
    id = arr[1];
    fstream fs1("id.txt",ios::out|ios::trunc);
    arr[1]++;
    fs1<<arr[0];fs1<<" ";fs1<<arr[1];
    fs1.close();
    this->name = name;
    this->gender = gender;
    this->age = age;
}
void Employee::save_emp(void)
{
    fstream fs("massage.bin",ios::out|ios::binary|ios::app);
    fs<<id;fs<<' ';fs<<name;fs<<' ';fs<<gender;fs<<' ';fs<<age;fs<<endl;
    fs.close();
}
Employee::Employee(int id,string name,bool gender,int age)
{
    this->id = id;
    this->name = name;
    this->gender = gender;
    this->age = age;
}
int Employee::get_id(void)
{
    return id;
}
int Employee::get_age(void)
{
    return age;
}
bool Employee::get_gender(void)
{
    return gender;
}
string Employee::get_name(void)
{
    return name;
}
