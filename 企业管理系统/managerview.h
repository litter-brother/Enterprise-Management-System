#ifndef MANAGERVIEW_H
#define MANAGERVIEW_H
#include<iostream>
#include"managerservice.h"
using namespace std;
class ManagerView
{
public:
	virtual void menu(void)=0;
	virtual void add(void)=0;
	virtual void del(void)=0;
	virtual void list(void)=0;
	virtual bool s_login(void)=0;
	virtual bool o_login(void)=0;
};

class ManagerViewConsolelmpl:public ManagerView
{
	ManagerServicelmpl msl;
public:
	bool s_login(void);
	bool o_login(void);
	void menu(void);
	void add(void);
	void del(void);
	void list(void);
};
#endif//MANAGERVIEW_H
