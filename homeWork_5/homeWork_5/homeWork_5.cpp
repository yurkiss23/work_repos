#include<iostream>
using namespace std;
int main()
{
	//ex.11
	int N, s_vas, s_gor;
	cout << "kilkist xodiv: ";
	cin >> N;
	for (int i = 1; i <= N; ++i) {
		if (i == 1) {
			s_vas = 3;
			s_gor = 5;
			cout << "xid: " << i << " vasilina: " << s_vas << " gorinich: " << s_gor << endl;
		}
		else {
			s_vas += 6;
			s_gor *= 2;
			cout << "xid: " << i << " vasilina: " << s_vas << " gorinich: " << s_gor << endl;
		}
	}
	cout << "gorinich prokovtnuv " << (s_vas + s_gor) << " shashok" << endl;
	return 0;
}