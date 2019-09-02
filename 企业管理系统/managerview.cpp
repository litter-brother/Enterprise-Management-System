#include<iostream>
#include"emis.h"
#include"tools.h"
#include"manager.h"
#include"managerservice.h"
#include"managerview.h"


s_manager sm;
bool ManagerViewConsolelmpl::s_login(void)
{
	string name;
	string passwd;
	cout<<"请输入姓名"<<endl;
	cin>>name;
	cout<<"请输入密码"<<endl;
	cin>>passwd;
	if(name==sm.get_name())
	{
		if(passwd==sm.get_passwd())
		{
			cout<<"超管登陆成功"<<endl;
			return true;
		}
		cout<<"登陆失败"<<endl;
		return false;
	}
	else
	{
		cout<<"登陆失败"<<endl;
		return false;
	}


}
bool ManagerViewConsolelmpl::o_login(void)
{
	string name;
	string passwd;
	cout<<"请输入姓名"<<endl;
	cin>>name;
	cout<<"请输入密码"<<endl;
	cin>>passwd;
	for(int i=0;i<msl.manager_size();i++)
	{
		if(name==msl.admin[i].get_name())
		{
			if(passwd==msl.admin[i].get_passwd())
			{
				cout<<"普通管理员登陆成功"<<endl;
				return true;
			}
			else
			{
				cout<<"登陆失败"<<endl;
				return false;
			}
		}
		else
		{
			cout<<"登陆失败"<<endl;
			return false;
		}
	}
}
void ManagerViewConsolelmpl::add(void)
{
	string name;
	string passwd;
	int id=get_manager_id();
	cout<<"请输入姓名"<<endl;
	cin>>name;
	cout<<"请输入密码"<<endl;
	cin>>passwd;
	Manager m(id,name,passwd);
	msl.addManager(m);
}
void ManagerViewConsolelmpl::del(void)
{
	int id;
	string name;
	cout<<"请输入姓名"<<endl;
	cin>>name;
	cout<<"请输入id"<<endl;
	cin>>id;
	msl.deleteManager(id);
}
void ManagerViewConsolelmpl::list(void)
{
	cout<<"以下是目前有权限的管理员"<<endl;
	msl.listManager();
}
void ManagerViewConsolelmpl::menu(void)
{		
	while(1)
	{
		int num=0;
		cout<<"1、添加管理员"<<endl;
		cout<<"2、删除管理员"<<endl;
		cout<<"3、显示所有管理员"<<endl;
		cout<<"4、退出"<<endl;
		cin>>num;
		if(num>=1||num<=4)
		{
			switch(num)
			{
				case 1:add();break;
				case 2:del();break;
				case 3:list();break;
				case 4:return main_menu();
			}
		}
		else
		{
			cout<<"你四不四傻，总共四个键你还能按错了"<<endl;
			break;
		}
	}

}
