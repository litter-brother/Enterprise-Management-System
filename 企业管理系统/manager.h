#ifndef MANAGER_H
#define MANAGER_H

#include <string.h>
#include <string>
using namespace std;
class Manager
{
	int id;
	string name;
	string passwd;
public:
	Manager(int id,string name,string passwd):id(id),name(name),passwd(passwd){ }
	int get_id(void);
	void set_id(int _id);
	string get_name(void);
	void set_name(string _name);
	string get_passwd(void);
	void set_passwd(string _passwd); 
};
class s_manager
{
	int id;
	string name;
	string passwd;
public:
	s_manager()
	{
		this->id=00000000;
		const string _name("root");
		const string _passwd("666666");
		name.assign(_name);
		passwd.assign(_passwd);
	}
	string get_name();
	string get_passwd();
	int get_id();
};
#endif//MANAGER_H
