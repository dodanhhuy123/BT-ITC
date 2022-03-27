#include <iostream.h>
int main(int argc, char *argv[])
{
	int i , n;
	double P = 0;
	cout<< "nhap n: ";
	cin>> n;
	for( i = 1; i <= n;i++)
	{
	   if( i % 2 == 0)
	   	{
   		P = 2*4*6*(2*i);
    	}
	}
			cout<< "P ="<< P << endl;
	return 0;
}