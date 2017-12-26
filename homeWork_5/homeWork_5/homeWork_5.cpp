#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	//ex.5
	int N;
	float sum=0, add = 1;
	cin >> N;
	for (int i = 1; i <= N; ) {
		sum += add;
		cout << "\nsum: " << sum << " add: " << add;
		i++;
		add = sqrt(i);
	}
	cout << "\ntotal sum: " << sum << endl;
	return 0;
}