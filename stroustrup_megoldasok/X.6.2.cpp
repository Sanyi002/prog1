#include<iostream>
#include<unistd.h>
int main()
{
	for(int i=0;i<30;i++)
	{
		std::cout<<"Hello"<<std::endl;
		sleep(1);
		std::cout<<"World"<<std::endl;
		sleep(1);
	}
	return 0;
}
