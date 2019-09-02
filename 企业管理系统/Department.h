#ifndef DEPARTMENT_H
#define DEPARTMENT_H

#include <vector>
#include "Employee.h"

class Department
{
    int m_nid;
    string m_strName;
    vector<Employee> m_vecEmps;
public:
    Department(string name);
    Department(int id,string name,vector<Employee> employees);
    bool deleteEmp(int id);
    void listEmp(void);

    void save_dep(void);
    int get_did(void);
    string get_dname(void);
    vector<Employee> get_demp(void);
    void addEmp(Employee emp);
    bool delEmp(int empid);
};

#endif//DEPARTMENT_H
