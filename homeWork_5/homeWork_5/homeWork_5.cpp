#include<iostream>
using namespace std;
int main()
{
	//ex.1
	float t, t_max=0, t_min=100;
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
	cout << "min temperature: " << d_min << "day " << t_min << "degrees" << endl;
	return 0;
}