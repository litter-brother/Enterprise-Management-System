#include "serviceDaoFileImpl.h"

using namespace std;

vector<Department> ServiceDaoFileImpl::load(vector<Department> data)
{
    fstream fs("massage.bin",ios::in|ios::binary);
    if(!fs.good())
    {
    	cout<<"ddd"<<endl;
	}
    int deptid = 0;
    fs>>deptid;
    vector<Employee> emps;
    while(100<deptid&&deptid<1000)
    {
        string deptname;
        fs>>deptname;
        int num = 0;
        fs>>num;
        while(num--)
        {
            int empid = 0;
            fs>>empid;
            string empname;
            fs>>empname;
            bool empgender = true;
            fs>>empgender;
            int empage = 0;
            fs>>empage;
            Employee emp(empid,empname,empgender,empage);
            emps.push_back(emp);
        }
        Department dept(deptid,deptname,emps);
        data.push_back(dept);
        if(!(fs>>deptid))
        {
            break;
        }
    }
    fs.close();
    return data;
}

void ServiceDaoFileImpl::save(vector<Department>& data)
{
	fstream fs("massage.bin",ios::trunc|ios::binary|ios::out);
	fs.close();
    for(int i=0;i<data.size();i++)
    {
        data[i].save_dep();
    }
    if(data.empty())
    {
    	fstream fs("massage.bin",ios::out|ios::binary|ios::trunc);
    	fs.close();
    }
}






