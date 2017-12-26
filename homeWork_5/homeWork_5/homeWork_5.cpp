#include<iostream>
using namespace std;
int main()
{
	//ex.4
	int dig, num, total_1 = 0, total_7 = 0;
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
	cout << "\nlast digit 1: " << total_1 << "\nlast digit 7: " << total_7 << endl;
	return 0;
}