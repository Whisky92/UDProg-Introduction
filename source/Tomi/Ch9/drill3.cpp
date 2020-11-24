#include "std_lib_facilities.h"

class Date
{
private:	
	int year, month, day;
public:	
	class Invalid{};
	bool is_valid();
	Date(int y, int m, int d): year(y), month(m), day(d)
	{
		if(!is_valid()) throw Invalid{};
	}
	void add_day(int n);
	int get_year() {return year;}
	int get_month() {return month;}
	int get_day() {return day;}
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

ostream& operator<<(ostream& os, Date& d)
{
	return os << d.get_year() << '.' << d.get_month() << '.' << d.get_day() << '.' << endl;
}

int main()
try{

	Date today={1978,6,25};
	cout << "The date defined by the exercise."<<endl;
	cout << today << endl;
	today.add_day(1);
	cout << "Today + 1 day"<<endl;
	cout << today << endl;
	Date tomorrow = {today};
	cout << "The date of tomorrow"<< endl;
	cout << tomorrow << endl;

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