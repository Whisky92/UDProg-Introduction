
#include "std_lib_facilities.h"

void inputs()
{
	int a,b,c,d = 0;
	cout << "Please type in the integet: 1234 , four times.\n";
	cin >> a >> oct >> b >> hex >> c >> d;
	cout << a << '\t' << b << '\t' << c << '\t' << d << '\n';
}

int main()
try{

	inputs();
	
	return 0;
	
}catch(exception& e)
{
	cout << "kiscica";
	return 1;
}
