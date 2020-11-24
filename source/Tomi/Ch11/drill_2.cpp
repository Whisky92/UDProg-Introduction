#include "std_lib_facilities.h"

void ffs() //float - fixed - scientific :) 
{
	float num = 1234567.89;
	
	cout << defaultfloat << num << '\t' << fixed << num << '\t' << scientific << num << endl;
	
}

int main()
try{
	
	ffs();
	
	return 0;
	
}catch(exception& e)
{
	cout << "kiscica";
	return 1;
}
