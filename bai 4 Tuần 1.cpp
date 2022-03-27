#include <iostream.h>
int main(int argc, char *argv[])
{
	int i,n;
	cout<< "nhap n: ";
	cin>> n;
	for(i = n; i > 0 ; i--)
	{
		for(int j = 1; j <= i;j++)
		{
			cout<< "*" ;
		}
		cout<< endl ;
	}
	return 0;
}