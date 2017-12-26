#include<iostream>
using namespace std;
int main()
{
	//ex.2
	int start = 0, end = 127;
	for (int i = start; i <= end; ) {
		for (int j = 0; j < 16; ++j) {
			char symb = i;
			cout << symb;
			i++;
		}
		cout << endl;
	}
	return 0;
}