#include "Time.h"

int main()
{
	Time time;
	int choice;
	bool t;
	int y, d, h, m, s;
	cout << "Welcome to Time Converter!\n" << endl;
	while (true)
	{
		t = true;
		y = 0; d = 0; h = 0; m = 0; s = 0;
		cout << "What would you like to do?\n1-View time\n2-Set time\n3-Reset time\n4-Exit\n";
		while (t == true)
		{
			cout << ">> ";
			cin >> choice;
			if (choice < 1 || choice > 4) { cout << "Invalid response. Try again.\n"; }
			else { t = false; }
		}
		switch (choice)
		{
		case 1:
			time.reduce();
			time.printTime();
			break;
		case 2:
			cout << "Enter your time values\nYears: "; cin >> y; cout << "\nDays: "; cin >> d; cout << "\nHours: "; cin >> h; cout << "\nMinutes: "; cin >> m; cout << "\nSeconds: "; cin >> s;
			time.setTime(y, d, h, m, s);
			break;
		case 3:
			time.setTime(0, 0, 0, 0, 0);
			break;
		default:
			exit(0);
		}
	}

	system("Pause");
	return 0;
}