#include<iostream>
using namespace std;
int main()
{
	//ex.1
	/*float t, t_max=0, t_min=100;
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
	cout << "min temperature: " << d_min << "day " << t_min << "degrees" << endl;*/

	//ex.2
	/*int start = 0, end = 127;
	for (int i = start; i <= end; ) {
		for (int j = 0; j < 16; ++j) {
			char symb = i;
			cout << symb;
			i++;
		}
		cout << endl;
	}*/

	//ex.3
	/*int up_let = 0, low_let = 0, dig = 0;
	char symb;
	for (int i = 0; i < 7; ++i) {
		cin >> symb;
		if (symb >= 65 && symb <= 90) {
			up_let++;
		}
		else if (symb >= 97 && symb <= 122) {
			low_let++;
		}
		else if (symb >= 48 && symb <= 57) {
			dig++;
		}
	}
	cout << "\nuppercase: " << up_let << "\nlowercase: " << low_let << "\ndigits: " << dig << endl;*/

	//ex.4
	/*int dig, num, total_1 = 0, total_7 = 0;
	cin >> num;
	for (int i = 0; i < num; ++i) {
		cin >> dig;
		if (dig % 10 == 1) {
			total_1++;
		}
		if (dig % 10 == 7) {
			total_7++;
		}
	}
	cout << "\nlast digit 1: " << total_1 << "\nlast digit 7: " << total_7 << endl;*/

	//ex.5
	/*int N;
	float sum = 0, add = 1;
	cin >> N;
	for (int i = 1; i <= N; ) {
		sum += add;
		cout << "\nsum: " << sum << " add: " << add;
		i++;
		add = sqrt(i);
	}
	cout << "\ntotal sum: " << sum << endl;*/

	//ex.6
	/*int max = 10, num_a = 0;
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
		if (symb == '.') {
		cout << "input stop" << endl;
		i = max;
		}
	}
	cout << "\nnumber of \'a\': " << num_a;*/

	//ex.7
	/*unsigned int dig;
	int sum = 0, num = 0, a;
	cin >> dig;
	for (; dig % 10;) {
		a = dig % 10;
		dig /= 10;
		sum += a;
		num++;
		cout << a << endl;
	}
	cout << "sum: " << sum << "\nnumber: " << num;*/

	//ex.8

	//ex.9
	/*unsigned int dig;
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
	}*/
	
	//ex.10
	/*double x, total = 1, div;
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
	}*/

	//ex.11
	/*int N, s_vas, s_gor;
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
	cout << "gorinich prokovtnuv " << (s_vas + s_gor) << " shashok" << endl;*/

	//ex.12
	/*int N, h = 1, i;
	cin >> N;
	for (i = 1; i < N; ++i, N -= h) {
		cout << "den: " << i << " vismiknuto: " << h << " kilkist volosin: " << (N - h) << endl;
		h *= 2;
	}
	cout << "volossja zakinchitsja za " << i << " dniv" << endl;*/

	//ex.13
	/*double N, rest;
	int M, i, j;
	cout << "input leght and stopday: ";
	cin >> N >> M;
	rest = N;
	for (i = 1, j = 2; i != M; ++i, ++j) {
		N /= j;
		rest -= N;
		cout << "den: " << i << " z'jv: " << N << " zalishilos: " << rest << endl;
	}
	cout << "na den: " << i << " zalishilos z'jsti: " << rest << "km" << endl;*/
	return 0;
}