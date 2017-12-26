#include<iostream>
using namespace std;
int main()
{
	//ex.1
	/*float t, t_max=0, t_min=100;
	int i, d_max=0, d_min;
	for (i = 1; i <= 7; ++i) {
		cin >> t;
		if (t > t_max) {
			t_max = t;
			d_max = i;
		}
		if (t < t_min) {
			t_min = t;
			d_min = i;
		}
	}
	cout << "max temperature: " << d_max << "day " << t_max << "degrees" << endl;
	cout << "min temperature: " << d_min << "day " << t_min << "degrees" << endl;*/

	//ex.2
	/*int start = 0, end = 127;
	for (int i = start; i <= end; ) {
		for (int j = 0; j < 16; ++j) {
			char symb = i;
			cout << symb;
			i++;
		}
		cout << endl;
	}*/

	//ex.3
	/*int up_let = 0, low_let = 0, dig = 0;
	char symb;
	for (int i = 0; i < 7; ++i) {
		cin >> symb;
		if (symb >= 65 && symb <= 90) {
			up_let++;
		}
		else if (symb >= 97 && symb <= 122) {
			low_let++;
		}
		else if (symb >= 48 && symb <= 57) {
			dig++;
		}
	}
	cout << "\nuppercase: " << up_let << "\nlowercase: " << low_let << "\ndigits: " << dig << endl;*/

	//ex.4
	/*int dig, num, total_1 = 0, total_7 = 0;
	cin >> num;
	for (int i = 0; i < num; ++i) {
		cin >> dig;
		if (dig % 10 == 1) {
			total_1++;
		}
		if (dig % 10 == 7) {
			total_7++;
		}
	}
	cout << "\nlast digit 1: " << total_1 << "\nlast digit 7: " << total_7 << endl;*/

	//ex.5
	/*int N;
	float sum = 0, add = 1;
	cin >> N;
	for (int i = 1; i <= N; ) {
		sum += add;
		cout << "\nsum: " << sum << " add: " << add;
		i++;
		add = sqrt(i);
	}
	cout << "\ntotal sum: " << sum << endl;*/
	return 0;
}