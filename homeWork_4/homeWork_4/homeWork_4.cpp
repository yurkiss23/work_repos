#include<iostream>
using namespace std;
int main()
{
	//ex.1
	/*const int M = 100, DM = 10, MM = 10;
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
	default:cout << "uncorrect value\n"; break;
	}*/

	//ex.2
	/*double dig1, dig2, res;
	//char '+'
	enum actions{plus='+',minus='-',mult='*',div='/'};
	cout << "enter 2 digits: " << endl;
	char action;
	cin >> dig1 >> dig2;
	cout << "select action (1-'+', 2-'-', 3-'*', 4-'/')" << endl;
	cin >> action;
	switch (action) {
	case actions::plus:res = dig1 + dig2; cout << dig1 << action << dig2 << "=" << res << endl; break;
	case actions::minus:res = dig1 - dig2; cout << dig1 << action << dig2 << "=" << res << endl; break;
	case actions::mult:res = dig1 * dig2; cout << dig1 << action << dig2 << "=" << res << endl; break;
	case actions::div:
		if (dig2 != 0) {
			res = dig1 / dig2; cout << dig1 << action << dig2 << "=" << res << endl; break;
		}
	default:cout << "action uncorrect" << endl; break;
	}*/

	//ex.3
	/*int a, max = 500, sum = 0;
	cout << "enter your digit: ";
	cin >> a;
	while (a <= max) {
		sum += a;
		cout << a++ << endl;
	}
	cout << "sum = " << sum << endl;*/

	//ex.4
	/*int start = 1, end = 1000, i = 1, sum = 0;
	double mean;
	do {
		sum += start; start++;
		cout << "iteration: " << i++ << endl;
	} while (i <= end);
	mean = (double)sum / --i;
	cout << "atythmetic mean = " << mean << endl;*/

	//ex.5
	int leght, count=0;
	char symb;
	cout << "enter symbol and leght of line" << endl;
	cin >> symb >> leght;
	while (count < leght) {
		cout << symb;
		count++;
	}
	cout << "\nend of line" << endl;
	return 0;
}