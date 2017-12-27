#include<iostream>
using namespace std;
int main()
{
	//ex.7
	unsigned int dig;
	int sum = 0, num = 0, a;
	cin >> dig;
	for (;dig%10;) {
		a = dig % 10;
		dig /= 10;
		sum += a;
		num++;
		cout << a << endl;
	}
	cout << "sum: " << sum << "\nnumber: " << num;
	return 0;
}