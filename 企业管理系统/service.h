#ifndef SERVICE_H
#define SERVICE_H

#include "serviceDaoFileImpl.h"

using namespace std;

class Service
{

public:
    virtual bool addDept(Department dept) = 0;
    virtual bool deleteDept(int deptid) = 0;
    virtual void list_Dept(void) = 0;
    virtual bool addEmp(Employee emp,int deptid) = 0;
    virtual bool deleteEmp(int empid) = 0;
    virtual bool modifyEmp(Employee emp) = 0;
    virtual void listEmp(int deptid) = 0;
    virtual void list_AllEmp(void) = 0;
    virtual void save(void) = 0;
    virtual void load(void) = 0;
    virtual ~Service(void) {}
    
};

#endif//SERVICE_H
