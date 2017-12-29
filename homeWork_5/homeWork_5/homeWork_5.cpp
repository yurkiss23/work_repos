#include<iostream>
using namespace std;
int main()
{
	//ex.8
	cout << "\t..::Cell-phone::.." << endl;
	const int PIN = 1111;
	int pin, i = 0, action;
	enum actions{cash=1,call,send,lock};
	do {
		cout << "enter pin: ";
		cin >> pin;
		if (pin == PIN) {
			do {
				cout << "select action: 1-add maney, 2-call, 3-send sms, 4-lock your phone" << endl;
				cin >> action;
				switch (action) {
				case actions::cash:cout << "add money!" << endl; break;
				case actions::call:cout << "enter phone number" << endl; break;
				case actions::send:cout << "enter text" << endl; break;
				case actions::lock:
					i = 3;
					cout << "locked!" << endl; break;
				default:cout << "uncorrect value!" << endl; break;
				}
			} while (action != 4);
		}
		else if (i == 2) {
			cout << "invalid pin!" << endl;
			i++;
		}
		else {
			cout << "invalid pin! try again!" << endl;
			i++;
		}
	} while (i < 3);
	cout << "bye!" << endl;
	return 0;
}