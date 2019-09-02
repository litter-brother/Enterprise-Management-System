#ifndef MANAGERDAO_H
#define MANAGERDAO_H
#include"tools.h"
#include"manager.h"
#define MANAGER_PATH "./data/manager.bin"
class ManagerDao
{
public:
	virtual vector<Manager> load(void)=0;
	virtual void save(vector<Manager> manager)=0;
};
class ManagerDaoFilelmpl:public ManagerDao
{
public:
	vector<Manager> load(void);
	void save(vector<Manager> manager);
};
#endif//MANAGERDAO_H
