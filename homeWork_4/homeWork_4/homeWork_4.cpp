#include<iostream>
using namespace std;
int main()
{
	//ex.1
	const int M = 100, DM = 10, MM = 10;
	double sm, res;
	enum units{m=1,dm,mm};
	int unit;
	cout << "enter number santimeters: ";
	cin >> sm;
	cout << "select unit(1-meters, 2-decimeters, 3-millimeters): ";
	cin >> unit;
	switch (unit) {
	case units::m:res = sm / M; cout << sm << "sm = " << res << "m\n"; break;
	case units::dm:res = sm / DM; cout << sm << "sm = " << res << "dm\n"; break;
	case units::mm:res = sm*MM; cout << sm << "sm = " << res << "mm\n"; break;
	default:cout << "uncorrect value\n";
	}

	//ex.2

	return 0;
}