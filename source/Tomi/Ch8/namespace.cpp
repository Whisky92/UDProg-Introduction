#include <iostream>
using namespace std;

namespace X
{
	int var;

	void print()
	{
		cout << "X::var="<<var << endl;
	}
}

namespace Y
{
	int var;

	void print()
	{
		cout << "Y::var="<<var << endl;
	}

}

namespace Z
{
	int var;

	void print()
	{
		cout << "Z::var="<<var << endl;
	}
}

int main()
{
	X::var=7;
	X::print();

	using namespace Y;
	var=9;
	print();
	{
		using Z::var;
		using Z::print;
		var=11;
		print();
	}
	print();
	X::print();

	return 0;
}