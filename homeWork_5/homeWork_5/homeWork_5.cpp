#include<iostream>
using namespace std;
int main()
{
	//ex.9
	unsigned int dig;
	int sum = 0;
	cout << "input digit: ";
	cin >> dig;
	if (dig != 1) {
		for (int i = 1; i <= dig; ++i) {
			if (dig%i == 0) {
				sum++;
			}
		}
		if (sum == 2) {
			cout << "chislo proste" << endl;
		}
		else {
			cout << "chislo scladene" << endl;
		}
	}
	else {
		cout << "vvedeno 1" << endl;
	}
	return 0;
}