#include "serviceview_impl.h"

using namespace std;

void ServiceViewConsoleImpl::menu(void)
{
    while (1)
    {
        cout<<"1. 添加部门	2. 删除部门"<<endl;
        cout<<"3. 部门列表	4. 删除员工"<<endl;
        cout<<"5. 添加员工	6. 修改员工信息"<<endl;
        cout<<"7. 员工列表信息 8. 所有员工"<<endl;
        cout<<"0. 退出       9. 保存"<<endl;
        int num = 0;
        cin>>num;
        switch (num)
        {
        	case 0:return;
        	case 1:addDept();break;
       	 	case 2:deleteDept();break;
       		case 3:listDept(); break;
        	case 4:deleteEmp();break;
        	case 5:addEmp();break;
        	case 6:modifyEmp();break;
        	case 7:listEmp();break;
        	case 8:listAllEmp();break;
        	case 9:m_pService->save();break;
        	default:break;
        }
    }
    
}
void ServiceViewConsoleImpl::addDept(void)
{
    cout<<"please input the name of department"<<endl;
    string name; cin>>name;
    Department dept(name);
    if(!m_pService->addDept(dept)) 
    {
        cout<<"falsed!"<<endl; return;
    }
    cout<<"successed!"<<endl;
}
void ServiceViewConsoleImpl::deleteDept(void)
{
    cout<<"please input the id of department"<<endl;
    int id = 0;cin>>id;
    if(!m_pService->deleteDept(id))
    {
        cout<<"falsed!"<<endl; return;
    }
    cout<<"successed!"<<endl;
}
void ServiceViewConsoleImpl::listDept(void)
{
    m_pService->list_Dept();
}
void ServiceViewConsoleImpl::addEmp(void)
{
    cout<<"please input the id of department"<<endl;
    int id = 0;cin>>id;
    cout<<"please input the massage of the employee"<<endl;
    cout<<"name: ";string name;cin>>name;
    cout<<"gender: ";string gender;cin>>gender;
    cout<<"age: ";int age=0; cin>>age;bool sex=true;
    if(gender == "man") sex=true;
    else sex=false;
    Employee emp(name,sex,age);
    if(!m_pService->addEmp(emp,id))
    {
        cout<<"falsed!"<<endl;return;
    }
    cout<<"successed!"<<endl;
}
void ServiceViewConsoleImpl::deleteEmp(void)
{
    cout<<"please input the id of employee"<<endl;
    int id=0;cin>>id;
    if(!m_pService->deleteEmp(id))
    {
        cout<<"falsed!"<<endl;return;
    }
    cout<<"successed!"<<endl;
}
void ServiceViewConsoleImpl::modifyEmp(void)
{
    cout<<"please input the massage of the employee"<<endl;
    cout<<"id: ";int id=0; cin>>id;
    cout<<"name: ";string name;cin>>name;
    cout<<"gender: ";string gender;cin>>gender;
    cout<<"age: ";int age=0; cin>>age;bool sex=true;
    if(gender == "man") sex=true;
    else sex=false;
    Employee emp(id,name,sex,age);
    if(!m_pService->modifyEmp(emp))
    {
        cout<<"falsed!"<<endl;return;
    }
    cout<<"successed!"<<endl;
}
void ServiceViewConsoleImpl::listEmp(void)
{
    cout<<"please input the id of department"<<endl;
    int id=0;cin>>id;
    m_pService->listEmp(id);
}
void ServiceViewConsoleImpl::listAllEmp(void)
{
    m_pService->list_AllEmp();
}
ServiceViewConsoleImpl::ServiceViewConsoleImpl(void)
{
    m_pService = new Service_impl;
}
ServiceViewConsoleImpl::~ServiceViewConsoleImpl(void)
{
    delete m_pService;
}
