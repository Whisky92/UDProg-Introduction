#include "std_lib_facilities.h"


int error_ID_number=0;

int area(int length, int width)
{	
	if (length<=0)
	{
		error_ID_number=2;
	}
	if(width<=0)
	{
		error_ID_number=3;
	}
	return length * width;
}

int framed_area(int x, int y)
{
	return area(x-2,y-2);
}

int main()
{
	int x=-2;
	int y=4;	

	int area1=area(x, y);
	if(error_ID_number==2) error("non-positive length");
	if(error_ID_number==3) error("non-positive width");
	cout<<"area1: "<<area1<<endl;

	int area2=area(3, 7);
	cout<<"area2: "<<area2<<endl;

	int framed_area1 = framed_area(3,7);
	cout<< "framed_area1: "<<framed_area1<<endl;

	double ratio = double(area1)/framed_area1;
	cout << "ratio: "<<ratio<<endl;

	return 0;
}