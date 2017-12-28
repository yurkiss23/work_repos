#include<iostream>
using namespace std;
int main()
{
	//ex.10
	double x, total=1, div;
	int n;
	cout << "input digit and grade: ";
	cin >> x >> n;
	if (n > 0) {
		for (int i = 0; i < n; ++i) {
			total *= x;
		}
		cout << "result: " << total << endl;
	}
	else {
		for (int i = 0; i < -n; ++i) {
			total *= x;
			div = 1 / total;
		}
		cout << "result: " << div << endl;
	}
	
	return 0;
}