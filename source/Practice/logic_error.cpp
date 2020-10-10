#include "std_lib_facilities.h"
 
 int main()
 {
 	double min = 1000;
 	double max = -1000;
 	double sum = 0;

 	vector<double> temps;
 	for (double temp; cin >> temp;)
 		temps.push_back(temp);

 	for(auto temp : temps)
 	{
 		if (temp > max) max = temp;
 		if (temp < min) min = temp;
 		sum += temp;
 	}

 	cout << "High temperature: " << max << endl;
 	cout << "Low temperature: "<< min << endl;
 	cout << "Avg temperature: "<< sum / temps.size() << endl;

 	return 0;
 }