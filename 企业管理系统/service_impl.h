#ifndef SERVICE_IMPL_H
#define SERVICE_IMPL_H

#include "service.h"

using namespace std;

class Service_impl:public Service
{
protected:
    vector<Department> depts;
    ServiceDao* dao;    
public:
    virtual bool addDept(Department dept);
    virtual bool deleteDept(int deptid);
    virtual void list_Dept(void);
    virtual bool addEmp(Employee emp,int deptid);
    virtual bool deleteEmp(int empid);
    virtual bool modifyEmp(Employee emp);
    virtual void listEmp(int deptid);
    virtual void list_AllEmp(void);
    virtual void save(void);
    virtual void load(void);
    Service_impl(void);
    ~Service_impl(void);
};

#endif//SERVICE_IMPL_H
