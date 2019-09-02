#ifndef SERVERDAO_H
#define SERVERDAO_H

#include "Department.h"

using namespace std;

class ServiceDao
{

public:
    virtual vector<Department> load(vector<Department> data) = 0;
    virtual void save(vector<Department>& data) = 0;
};

#endif//SERVERDAO_H