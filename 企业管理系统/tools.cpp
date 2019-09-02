#include<iostream>
#include<fstream>
#include<cstdlib>
#include"tools.h"
#include"emis.h"

using namespace std;

int get_manager_id(void)
{
	srand(time(NULL));
	int id=rand()%60+1;
	char buf[16] = {};	
	return id;
}

/*void init_id(size_t id)
{
	if(0==access("./data/id.txt",F_OK))
	{
		return ;
	}
	int fd = open("./data/id.txt",O_WRONLY|O_CREAT,0644);
	if(fd<0)
	{
		cout<<"open ID_PATH error"<<endl;
		return;
	}
	write(fd,&id,sizeof(id));
}
*/


