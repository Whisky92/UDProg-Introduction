#include "std_lib_facilities.h"

int main()
{
	/*double a=0;
	double b=0;
	while(cin>>a>>b){
		cout<<a<<' '<<b<<endl;
		if(a<b){
			cout<<"The smaller number is: "<<a<<endl;
			cout<<"The larger number is: "<<b<<endl;
			if((b-a)<0.01)
				cout<<"The numbers are almost equal";		
		}else if(b<a){
			cout<<"The smaller number is: "<<b<<endl;
			cout<<"The larger number is: "<<a<<endl;
			if((a-b)<0.01)
				cout<<"The numbers are almost equal";
		}else{
			cout<<"The numbers are equal"<<endl;
		}
	}*/

	double x=0;
	double min;
	double max;
	bool igaz=true;
	char u='0';
	vector<double> values;
	int m_to_cm=100;
	int ft_to_in=12;
	double in_to_cm=2.54;
	int sum=0;
	while(cin>>x>>u){
		cout<<x<<' '<<u;
		if(u=='c') x=x/100;
		if(u=='i') x=x*2.54/100;
		if(u=='f') x=x*12*2.54/100;	
		cout<<"(= "<<x<<" m)"<<endl;
		if(igaz){
			igaz=false;
			min=x;
			max=x;
		}
		if(x<min){
			cout<<x<<" is the smallest number so far"<<endl;
			min=x;
		}
		else if(x>max){
			cout<<x<<" is the largest number so far"<<endl;
			max=x;
		}
		values.push_back(x);
		sum+=x;
	}
	cout<<"Min: "<<min<<"m "<<"Max: "<<max<<"m "<<"Sum: "<<sum<<"m"<<endl;
	cout<<"The values:"<<endl;
	for(auto m : values)
		cout<<m<<"m"<<endl;
	cout<<"\n";
	sort(values);
	cout<<"The sorted vector:"<<endl;
	for(auto m : values)
		cout<<m<<'m'<<endl;

return 0;		
}
