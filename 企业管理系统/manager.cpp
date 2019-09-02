#include<iostream>
#include"manager.h"


int Manager::get_id(void)
{
	return this->id;
}
void Manager:: set_id(int _id)
{
	this->id=_id;
}
string Manager::get_name(void)
{
	return this->name;
}
void Manager::set_name(string _name)
{
	this->name = _name;
}
string Manager::get_passwd(void)
{
	return this->passwd;
}
void Manager::set_passwd(string _passwd)
{
	this->passwd= _passwd;
}


string s_manager::get_passwd(void)
{
	return this->passwd;
}
string s_manager::get_name(void)
{
	return this->name;
}
int s_manager::get_id(void)
{
	return this->id;
}
