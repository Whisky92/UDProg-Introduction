#include "my.h"
#include <iostream>
using namespace std;
int foo;

void swap_v(int a, int b)
{
	int temp;
	temp = a;
	a=b;
	b=temp;

	cout << "In function (c/d)x= "<<a<<", (c/d)y="<<b<<endl;
}

void swap_r(int& a, int& b)
{
	int temp;
	temp = a;
	a=b;
	b=temp;
}

/*void swap_cr(const int& a,const int& b)
{
	int temp;
	temp = a;
	a=b;
	b=temp;
}*/

int main()
try {  
	foo = 7;
	print_foo();
	print(99);
	{
		cout <<"Enter a character!\n"
		char cc;
		cin>>cc;
	}

	cout <<"swap_v(x,y);"<<endl;
	int x=7;
	int y=9;
	swap_v(x,y);
	cout <<"The original x= "<< x <<", y="<<y<<endl;
	cout <<"swap_r(x,y)";
	swap_r(x,y);
	cout << "x= "<<x<<", y="<<y<<endl;
	cout <<'\n';

	cout <<"swap_v(7,9);"<<endl;
	swap_v(7,9);
	cout << "\n";

	cout <<"swap_v(cx,cy);"<<endl;
	const int cx = 7;
	const int cy = 9;
	swap_v(cx,cy);
	cout <<"The original cx= "<< cx <<", cy="<<cy<<endl;
	cout <<'\n';
	
	cout << "swap_v(7.7,9.9); "<<endl;
	//Not working correctly
	swap_v(7.7,9.9);
	cout <<'\n'; 

	cout << "swap_v(dx,dy);"<<endl;
	//Not working correctly
	double dx = 7.7;
	double dy = 9.9;
	cout <<"swap_v(dx,dy)";
	swap_v(dx,dy);
	cout <<"The original dx= "<< dx <<", dy="<<dy<<endl;

	return 0;
} catch(exception& e) {
	cerr << e.what() << endl;
	return 1;
}catch (...){
	cout << "Something went wrong"<<endl;
	return 2;
}