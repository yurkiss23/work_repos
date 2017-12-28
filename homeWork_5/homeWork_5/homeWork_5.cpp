#include<iostream>
using namespace std;
int main()
{
	//ex.8
	cout << "\t..::Cell-phone::.." << endl;
	const int PIN = 1111;
	int pin, i = 1, action;
	enum actions{cash=1,call,send,lock};
	cout << "enter pin: ";
	cin >> pin;
	//while (i < 3) {
		if (pin == PIN) {
			do {
				cout << "select action: 1-add maney, 2-call, 3-send sms, 4-lock your phone" << endl;
				cin >> action;
				switch (action) {
				case actions::cash:cout << "add money!" << endl; break;
				case actions::call:cout << "enter phone number" << endl; break;
				case actions::send:cout << "enter text" << endl; break;
				//case actions::lock:cout << "locked!" << endl; break; continue;
				}
			} while (action != 4);
		}
		else {
			cout << "invalid pin! try again!" << endl;
			cin >> pin;
			i++;
		}
	//}
	cout << "bay!" << endl;
	return 0;
}