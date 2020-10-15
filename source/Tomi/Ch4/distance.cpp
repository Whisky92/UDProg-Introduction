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
	const double cm_to_m=100;
	const double ft_to_in=12;
	const double in_to_cm=2.54;
	double sum=0;
	const double m=x/1;;
	while(cin>>x>>u){
		cout<<x<<' '<<u;
		if(u=='m') x=x/1;
		else if(u=='c') x=x/cm_to_m;
		else if(u=='i') x=x*in_to_cm/cm_to_m;
		else if(u=='f') x=x*ft_to_in*in_to_cm/cm_to_m;
		else cout<<" Érvénytelen mértékegység"<<endl;	
		
		if(u=='c' || u=='m' || u=='i' || u=='f'){
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
