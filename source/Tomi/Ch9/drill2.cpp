#include "std_lib_facilities.h"

struct Date
{
	int year, month, day;
	class Invalid{};
	bool is_valid();
	Date(int y, int m, int d): year(y), month(m), day(d)
	{
		if(!is_valid()) throw Invalid{};
	}
	void add_day(int n);
};


void Date::add_day(int n){
	day+=n;
	switch(month){
		case 2:
			if(day>28){
				month++;
				day -=28;
			}
			break;
		case 1: case 3: case 5: case 7: case 8: case 10: case 12:
			if(day>31){
				month++;
				day-=31;
				if(month>12){
					year++;
					month -=12;
				}
			} 
			break;
		case 4: case 6: case 9: case 11:
			if(day>30){
				month++;
				day-=30;
			}
			break;		
		default: 
			error("Oh, oh!");	
	}
}

bool Date::is_valid()
{	
	if(year>0 && month >= 1 && month <= 12)
	{
		switch(month)
		{
			case 1: case 3: case 5: case 7: case 8: case 10: case 12:
				if(day>0 && day<32)
				{
					return true;
				}
				else
				{ 
					return false;
				}
				break;
			case 4: case 6: case 9: case 11:
				if(day>0 && day<31){
					return true;
				}
				else{ return false; }
				break;
			case 2:
				if(day>0 && day<29)
				{
					return true;
				}
				else
				{
					return false;
				} 		
				break;
			default:
				error("Oh, oh!");			
		}
	}else{			
	return false;
}
	return is_valid();
}

ostream& operator<<(ostream& os, const Date& d)
{
	return os << d.year << '.' << d.month << '.' << d.day << '.' << endl;
}

void f()
{
	Date today={1978,6,25};
	cout << "The date defined by the exercise."<<endl;
	cout << today << endl;
	today.add_day(1);
	cout << "Today + 1 day"<<endl;
	cout << today << endl;
	Date tomorrow = {today};
	cout << "The date of tomorrow"<< endl;
	cout << tomorrow << endl;

}


int main()
try{

	f();
	return 0;

}catch(exception& e){
	cerr << e.what() << endl;
	return 1;
}catch(Date::Invalid){
	cout <<"Invalid date" << endl;
	return 2;	
}catch(...){
	cout << "Something went wrong!";
	return 3;
}