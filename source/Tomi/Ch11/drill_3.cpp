#include "std_lib_facilities.h"

int birthyear()
{
	int birth_year = 2001;
	
	cout << birth_year << "\t(decimal)\n" << hex << birth_year << "\t(hexadecimal)\n"<< oct << birth_year << "\t(octal)\n" ;
	
	return birth_year;
}

void myage()
{	
	int birth{birthyear()};
	
	int cyear = 2020;
	
	int age = cyear-birth;
	
	cout <<  "\nAge: " << dec << age << endl;
}

int main()
try{
	
	myage();

	return 0;

}
catch(exception& e)
{
	cout << e.what() << endl;
	return 1;
}