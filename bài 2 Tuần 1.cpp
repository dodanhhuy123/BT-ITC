#include <iostream.h>
int main(int argc, char *argv[])
{
	int KW ;
	long sotien  = 0;
	cout<< "nhap vap KW: ";
	cin>> KW;
	if(KW >= 0 && KW <= 100){
		sotien = KW * 2000;
		cout<< "sotien = " << sotien << endl;
	}
    else if(KW >= 101 && KW <= 200){
		sotien = KW * 2500;
		cout<< "sotien = " << sotien << endl;
	}
	else 
		if(KW >= 201 && KW <= 300){
		sotien = KW * 3000;
		cout<< "sotien = " << sotien << endl;
	}
	else{
		sotien = KW * 5000;
		cout<< "sotien = " << sotien << endl;
	}
	return 0;
}