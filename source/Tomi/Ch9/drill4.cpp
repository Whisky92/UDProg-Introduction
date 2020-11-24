#include "std_lib_facilities.h"

vector<string> months ={
	"January",
	"February",
	"March",
	"April",
	"May",
	"June",
	"July",
	"August",
	"September",
	"October",
	"November",
	"December"
};

enum class Month
{
	jan, feb, mar, apr, may, jun, july, aug, sept, okt, nov, dec
};

Month operator++(Month& m)
{
	m = (m==Month::dec) ? Month::jan : Month(int(m)+1);
	return m;
}

ostream& operator<<(ostream& os, Month m)
{
	return os << months[int(m)];
}

class Date
{
private:	
	int year, day;
	Month month;
public:	
	class Invalid{};
	bool is_valid();
	Date(int y, Month m, int d): year(y), month(m), day(d)
	{
		if(!is_valid()) throw Invalid{};
	}
	void add_day(int n);
	int get_year() {return year;}
	Month get_month() {return month;}
	int get_day() {return day;}
};


void Date::add_day(int n){
	day+=n;
	switch(month){
		case Month::feb:
			if(day>28){
				++month;
				day -=28;
			}
			break;
		case Month::jan: case Month::mar: case Month::may: case Month::july: case Month::aug: case Month::okt: case Month::dec:
			if(day>31){
				++month;
				day-=31;
				if(month==Month::jan){
					year++;
				}
			} 
			break;
		case Month::apr: case Month::jun: case Month::sept: case Month::nov:
			if(day>30){
				++month;
				day-=30;
			}
			break;		
		default: 
			error("Oh, oh!");	
	}
}

bool Date::is_valid()
{	
	if(year>0)
	{
		switch(month)
		{
			case Month::jan: case Month::mar: case Month::may: case Month::july: case Month::aug: case Month::okt: case Month::dec:
				if(day>0 && day<32)
				{
					return true;
				}
				else
				{ 
					return false;
				}
				break;
			case Month::apr: case Month::jun: case Month::sept: case Month::nov:
				if(day>0 && day<31){
					return true;
				}
				else{ return false; }
				break;
			case Month::feb:
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

	Date today={1978,Month::jun,25};
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