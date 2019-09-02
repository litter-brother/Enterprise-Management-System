#include "serviceDao.h"

using namespace std;

class ServiceDaoFileImpl:public ServiceDao
{
public:
    virtual vector<Department> load(vector<Department> data);
    virtual void save(vector<Department>& data);
};