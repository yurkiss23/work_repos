#include<iostream>
using namespace std;
int main()
{
	//ex.12
	int N, h = 1, i;
	cin >> N;
	for (i = 1; i < N; ++i, N-=h) {
		cout << "den: " << i << " vismiknuto: " << h << " kilkist volosin: " << (N - h) << endl;
		h *= 2;
	}
	cout << "volossja zakinchitsja za " << i << " dniv" << endl;
	return 0;
}