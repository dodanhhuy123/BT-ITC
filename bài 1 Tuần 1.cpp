#include <iostream.h>
int main(int argc, char *argv[])
{
	int thu;
	cout<< "nhap thu: ";
	cin>> thu;
	while(thu > 7){
		cout<< "nhap lai thu: ";
		cin>> thu;
	}
	switch(thu)
	{
		case 1: cout<< "Sunday" << endl;
		break;
		case 2: cout<< "Monday" << endl;
		break;
		case 3: cout<< "Tuesday" << endl;
		break;
		case 4: cout<< "Wednesday" << endl;
		break;
		case 5: cout<< "Thursday" << endl;
		break;
		case 6: cout<< "Friday" << endl;
		break;
		case 7: cout<< "Saturday" << endl;
		break; 
        default: cout<< "xin loi";
        break;	
	}
	return 0;
}