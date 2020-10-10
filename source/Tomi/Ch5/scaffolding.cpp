#include "std_lib_facilities.h"

int main()
try {

	/*cout << "Success!\n";
	cout << "Success!\n";
	cout << "Success" << "!\n";
	cout << "Success!" << '\n';
	string res = "7"; vector<string> v(10); v[5] = res; cout <<
"Success!\n";
	vector<int> v(10); v[5] = 7; if (v[5]==7) cout << "Success!\n";
	bool cond=true; if (cond) cout << "Success!\n"; else cout << "Fail!\n";
	bool c = true; if (c) cout << "Success!\n"; else cout <<
"Fail!\n";
	string s = "ape"; bool c = "true"; if (c) cout <<
"Success!\n";
	string s = "ape"; if (s=="ape") cout << "Success!\n";
	string s = "ape"; if (s=="ape") cout <<"Success!\n";
	string s = "ape"; if (s=="ape") cout << "Success!\n";
	vector<char> v(5); for (int i=0; i<v.size(); ++i) ; cout <<
"Success!\n";
	vector<char> v(5); for (int i=0; i<v.size(); ++i) ; cout <<
"Success!\n";
	string s = "Success!\n"; for (int i=0; i<s.length(); ++i) cout << s[i];
	if (true) cout << "Success!\n"; else cout << "Fail!\n";
	int x = 120; char c = x; 
	//char c='x'; int x=c; cout <<x; //ez a sor csak az x értékének kiszámítása
	if (c==120) cout << "Success!\n";
	string s = "Success!\n"; for (int i=0; i<10; ++i) cout << s[i];
	// cout<<s.length(); ez a sor csak az s hosszának ellenőrzése
	vector<int> v(5); for (int i=0; i<=v.size(); ++i) ; cout <<
"Success!\n";
	int i=0; int j = 9; while (i<10) ++i; if (j<i) cout <<
"Success!\n";
	int x = 3; double d = 5/(x-2); if (d==2*x-1) cout <<
"Success!\n";
	string s = "Success!\n"; for (int i=0; i<10; ++i) cout
<< s[i]; 
	int i=0; int j=-1; while (i<10){++i; ++j;} if (j<i) cout << "Success!\n";
	int x = 4; double d = 5/(x-2); if (d=2*x-1.5) cout <<
"Success!\n";*/
	cout << "Success!\n";

	return 0;

} catch (exception& e){
	cerr <<"error: "<< e.what()<<endl;
	return 1;
} catch (...){
	cerr <<"Unknown exception\n";
	return 2;
}