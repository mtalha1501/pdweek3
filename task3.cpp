#include<iostream>
using namespace std;
 main () {
	float invel;
	float acc;
	float time;
	cout << "Enter Initial Velocity (m/s): ";
	cin >> invel;
	cout << "Enter Acceleration (m/s^2): ";
	cin >> acc;
	cout << "Enter Time (s): ";
	cin >> time;
	float vf = invel + (acc*time);
	cout << "Final Velocity (m/s): " << vf << endl;
}
	