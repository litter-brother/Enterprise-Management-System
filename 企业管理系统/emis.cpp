#include<cstdio>
#include<vector>
#include"manager.h"
#include"tools.h"
#include"managerservice.h"
#include"managerview.h"
#include"managerdao.h"
#include"serviceview_impl.h"

void main_menu()
{
	int point;
	point=0;
	cout<<"*****欢迎来到企业信息管理系统*****"<<endl;
	cout<<"--------1、超级管理员登陆--------"<<endl;
	cout<<"--------2、普通管理员登陆--------"<<endl;
	cout<<"请输入指令"<<endl;
	cin>>point;
	ManagerViewConsolelmpl mvc;
	ServiceViewConsoleImpl svc;
	if(1==point)
	{
		if(mvc.s_login())
		{
			mvc.menu();
		}
	}
	else if(2==point)
	{
		if(mvc.o_login())
		{
			svc.menu();
		}
	}
	else
	{
		cout<<"你四不四傻，2个键都能按错"<<endl;
	}
}
void emis_init(void)
{
	// 申请堆内存、加载数据
	pf("系统初始化...\n");
}

// 系统开始运行
void emis_start(void)
{
	// 进入系统的业务流程控制	
	pf("系统开始运行...\n");
	main_menu();


}

// 系统结束
void emis_exit(void)
{
	// 释放内存、保存数据
	pf("系统结束");
}
