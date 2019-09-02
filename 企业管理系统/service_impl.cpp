#include "service_impl.h"

using namespace std;

bool Service_impl::addDept(Department dept)
{
    depts.push_back(dept);
    return true;
}
void Service_impl::load(void)
{
	vector<Department> aa;
    depts = dao->load(aa);
}
bool Service_impl::deleteDept(int deptid)
{
    vector<Department>::iterator begin = depts.begin();
    for(begin;begin<depts.end();begin++)
    {
        if((*begin).get_did() == deptid)
        {
            depts.erase(begin);
            return true;
        }
    }
    return false;
}
void Service_impl::list_Dept(void)
{
    for(int i=0;i<depts.size();i++)
    {
        cout<<"id:"<<depts[i].get_did()<<'-'<<"name:"<<depts[i].get_dname()<<endl;
    }
}
bool Service_impl::addEmp(Employee emp,int deptid)
{
    for(int i=0;i<depts.size();i++)
    {
        if(depts[i].get_did() == deptid)
        {
            depts[i].addEmp(emp);
            return true;
        }
    }
    return false;
}
bool Service_impl::deleteEmp(int empid)
{
    for(int i=0;i<depts.size();i++)
    {
        if(depts[i].delEmp(empid))
            return true;
    }
    return false;
}
bool Service_impl::modifyEmp(Employee emp)
{
    for(int i=0;i<depts.size();i++)
    {
        if(depts[i].delEmp(emp.get_id()))
        {
            depts[i].addEmp(emp);
            return true;
        }
    }
    return false;
}
void Service_impl::listEmp(int deptid)
{
    for(int i=0;i<depts.size();i++)
    {
        if(depts[i].get_did() == deptid)
        {
            vector<Employee> emps = depts[i].get_demp();
            for(int j=0;j<emps.size();j++)
            {
                string gender;
                if(emps[j].get_gender())
                {
                    gender = "man";
                }
                else
                {
                    gender = "woman";
                }
                cout<<"id:"<<emps[j].get_id()<<'-'<<"name:"<<emps[j].get_name()<<'-'<<"gender:"<<gender<<'-'<<"age:"<<emps[j].get_age()<<endl;
            }
        }
    }
}
void Service_impl::list_AllEmp(void)
{
    for(int i=0;i<depts.size();i++)
    {  
        vector<Employee> emps = depts[i].get_demp();
        for(int j=0;j<emps.size();j++)
        {
            string gender;
            if(emps[j].get_gender())
            {
                gender = "man";
            }
            else
            {
                gender = "woman";
            }
            
            cout<<"id:"<<(emps[j].get_id())<<'-'<<"name:"<<(emps[j].get_name())<<'-'<<"gender:"<<gender<<'-'<<"age:"<<(emps[j].get_age())<<endl;
        }
    }
}
void Service_impl::save(void)
{
	dao->save(depts);
}
Service_impl::Service_impl(void)
{
    dao = new ServiceDaoFileImpl;
    vector<Department> aa;
    depts = dao->load(aa);
}
Service_impl::~Service_impl(void)
{
    dao->save(depts);
    delete dao;
}
