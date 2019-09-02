#ifndef SERVICEVIEW_IMPL_H
#define SERVICEVIEW_IMPL_H

#include "serviceview.h"

using namespace std;

class ServiceViewConsoleImpl:public ServiceView
{
protected:
    Service* m_pService;
public:
    virtual void menu(void);
    virtual void addDept(void);
    virtual void deleteDept(void);
    virtual void listDept(void);
    virtual void addEmp(void);
    virtual void deleteEmp(void);
    virtual void modifyEmp(void);
    virtual void listEmp(void);
    virtual void listAllEmp(void);
    ServiceViewConsoleImpl(void);
    ~ServiceViewConsoleImpl(void);
};

#endif//SERVICEVIEW_IMPL_H
