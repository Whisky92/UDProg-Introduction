#include "std_lib_facilities.h"

int main()
{
	vector<string> words;
	for(string temp; cin >> temp;)
		words.push_back(temp);

	cout <<"Number of words: "<< words.size()<<endl;

	return 0;
}