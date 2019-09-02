#include<iostream>
#include<fstream>
#include<vector>
#include"emis.h"
#include"manager.h"
#include"managerservice.h"
#include"managerdao.h"
using namespace std;

vector<Manager> ManagerDaoFilelmpl::load(void)
{
	vector<Manager> ads;
	ifstream in;
	in.open("manager.bin",ios::in|ios::binary);
	char buf[128]={};
	int _id;
	char _name[32]={};
	char _passwd[32]={};
	int i=0;
	while(in.getline(buf,sizeof(buf)))
	{
		sscanf(buf,"%d %s %s",&_id,_name,_passwd);
		Manager m(_id,_name,_passwd);
		ads.push_back(m);
	}
	return ads;

}
void ManagerDaoFilelmpl::save(vector<Manager> manager)
{
	ofstream put;
	put.open("manager.bin",ios::out|ios::trunc|ios::binary);
	for(int i=0;i<manager.size();i++)
	{
		put<<manager[i].get_id()<<" "<<manager[i].get_name()<<" "<<manager[i].get_passwd()<<endl;
	}
	put.close();
}




