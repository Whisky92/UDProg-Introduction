#include "std_lib_facilities.h"

int main()
{
	int a=20000;
	char c=a;
	int b=c;
	if(a!=b)
		cout<<"a!=b, a="<<a<<" b="<<b<<endl;
	else
		cout<<"Hatalmas a karakter\n";
	
	return 0;
}