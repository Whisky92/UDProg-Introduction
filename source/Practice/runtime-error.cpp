#include "std_lib_facilities.h"

int area(int length, int width)
{
	return length * width;
}

int framed_area(int x, int y)
{
	return area(x-2,y-2);
}

int main()
{
	int x=2;
	int y=4;	

	int area1=area(x, y);
	cout<<"area1: "<<area1<<endl;

	int area2=area(3, 7);
	cout<<"area2: "<<area2<<endl;

	int framed_area1 = framed_area(3,7);
	cout<< "framed_area1: "<<framed_area1<<endl;

	double ratio = double(area1)/framed_area1;
	cout << "ratio: "<<ratio<<endl;

	return 0;
}