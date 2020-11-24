#include "std_lib_facilities.h"

struct Point
{
	double x;
	double y;
};

int main()
try {

	vector<Point> original_points;
	double x;
	double y;
	int numb=0;
	while(numb<7)
	{
		cout <<"Please enter the " << (numb+1) << "th points.";
		numb++;
		cin >> x >> y;
		original_points.push_back(Point{x,y});

	}

	cout << '\n';
	cout << "Here are the points:" << endl;	

	for(const Point& p : original_points)
	{
		cout << p.x << " " << p.y<< endl;
	}


	cout <<"Enter output file name: ";
	string oname;
	cin >>oname;

	ofstream ost {oname};
	if(!ost) error("Can't open output file", oname);


	for(const auto& p : original_points)
	{
		ost << p.x <<" "<< p.y<<endl;
	}


	ost.close();

	cout <<"Enter input file name: ";
	string iname;
	cin >> iname;

	ifstream ist {iname};
	if(!ist) error("Can't open input file ", iname);

	vector<Point> processed_points;

	while(ist >> x >> y )
	{
		processed_points.push_back(Point{x,y});
	}

	cout << "The 1st vector" << endl;	
	for(const Point& p : original_points)
		{
			cout << p.x << " " << p.y<< endl;
		}
	cout << "The 2nd vector" <<endl;
	for(const Point& p : processed_points)
		{
			cout << p.x << " " << p.y<< endl;
		}
	return 0;

	for(int i=0;i<7;++i)
	{
		if((original_points[i].x != processed_points[i].x) || (original_points[i].y != processed_points[i].y))
			cout << "Something's wrong!" << endl;
	}


}catch(runtime_error& e){
	cerr << "Error: "<<e.what()<<endl;
	return 1;
}catch(...){
	cerr <<"Some error\n";
	return 2;
}