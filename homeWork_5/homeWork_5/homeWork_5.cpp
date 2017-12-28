#include<iostream>
using namespace std;
int main()
{
	//ex.13
	double N, rest;
	int M, i, j;
	cout << "input leght and stopday: ";
	cin >> N >> M;
	rest = N;
	for (i = 1, j = 2; i != M; ++i, ++j) {
		N /= j;
		rest -= N;
		cout << "den: " << i << " z'jv: " << N << " zalishilos: " << rest << endl;
	}
	cout << "na den: " << i << " zalishilos z'jsti: " << rest << "km" << endl;
	return 0;
}