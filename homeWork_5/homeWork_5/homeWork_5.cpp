#include<iostream>
using namespace std;
int main()
{
	//ex.3
	int up_let = 0, low_let = 0, dig = 0;
	char symb;
	for (int i = 0; i < 7; ++i) {
		cin >> symb;
		if (symb >= 65 && symb<=90) {
			up_let++;
		}
		else if (symb >= 97 && symb <= 122) {
			low_let++;
		}
		else if (symb >= 48 && symb <= 57) {
			dig++;
		}
	}
	cout << "\nuppercase: " << up_let << "\nlowercase: " << low_let << "\ndigits: " << dig << endl;
	return 0;
}