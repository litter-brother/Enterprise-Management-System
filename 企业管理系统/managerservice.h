#ifndef MANAGERSERVICE_H
#define MANAGERSERVICE_H
#include<iostream>
#include<vector>
#include"managerdao.h"
#include"manager.h"
#include"tools.h"
using namespace std;

class ManagerService
{
public:
	virtual bool addManager(Manager& manager)=0;
	virtual bool deleteManager(int _id)=0;
	virtual void listManager(void)=0;
	virtual ~ManagerService(void){}
};
class ManagerServicelmpl:public ManagerService
{
	ManagerDao* daofile;
public:
	vector<Manager> admin;
	ManagerServicelmpl(void)
	{
		ManagerDao* daofile = new ManagerDaoFilelmpl;
		admin=daofile->load();
	}
	~ManagerServicelmpl(void)
	{
		daofile->save(admin);
		delete daofile;
	}
	bool addManager(Manager& manager);
	bool deleteManager(int _id);
	void listManager(void);
	int manager_size(void);
};
#endif//MANAGERSERVICE_H
