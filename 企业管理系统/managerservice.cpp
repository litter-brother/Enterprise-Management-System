#include<vector>
#include"emis.h"
#include"managerservice.h"

bool ManagerServicelmpl::addManager(Manager& manager)
{
	admin.push_back(manager);
	cout<<"添加成功"<<endl;
	return true;
}
bool ManagerServicelmpl::deleteManager(int _id)
{
	for(int i=0;i<admin.size();i++)
	{
		if(admin[i].get_id()==_id)
		{
			admin.erase(admin.begin()+i);
		}
	}
}
void ManagerServicelmpl::listManager(void)
{
	for(int i=0;i<admin.size();i++)
	{
		cout<<admin[i].get_id()<<" ";
		cout<<admin[i].get_name()<<endl;
	}
}
int ManagerServicelmpl::manager_size(void)
{
	return admin.size();
}
