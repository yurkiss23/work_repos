#include<iostream>
using namespace std;
int main()
{
	//ex.6
	int max = 10, num_a = 0;
	char symb;
	for (int i = 0; i < max; ++i) {
		cin >> symb;
		if (symb == 'a') {
			num_a++;
		}
		//v.1
		if (symb == '.') {
			cout << "input stop" << endl;
			break;
		}
		//v.2
		/*if (symb == '.') {
			cout << "input stop" << endl;
			i = max;
		}*/
	}
	cout <<"\nnumber of \'a\': "<< num_a;
	return 0;
}