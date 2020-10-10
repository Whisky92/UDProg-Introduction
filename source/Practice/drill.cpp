#include "std_lib_facilities.h"

int main()
try{
	cout << "Success!\n";
}catch(exception& e){
	cerr<<"error: "<<e.what()<<endl;
	return 1;
}catch(...){
	cerr<<"Unknown exception\n";
	return 2;
}