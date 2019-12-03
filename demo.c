#include<stdio.h>

	void fun()
	{
		printf("no para");
	}

		void fun(int n)
	{
		printf("para");
	}


int main()
{
	fun();
	fun(10);	

	return 0;
}
