//lab5-3.cpp - displays the total amount due
//Created/revised by <your name> on <current date>

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double discountRate;
	const double shipChg1 = 0.99;
	const double shipChg2 = 4.99;
	double amtOwed = 0.0;
	char member = ' ';
	cout << "Amount owed before any discount and shipping: ";
	cin >> amtOwed;
	cout << "Premier member (Y/N)? ";
	cin >> member;
	if (toupper(member) == 'Y') {
		discountRate = 0.1;
		amtOwed -= amtOwed * discountRate;
	}
	else{
		discountRate = 0.05;
		amtOwed -= amtOwed * discountRate;
	}
	if (amtOwed >= 100.0){
		amtOwed += shipChg1;
	}
	else{
		amtOwed += shipChg2;
	}
	cout << fixed << setprecision(2);
	cout << "Amount owed after any discount and shipping: " << amtOwed << endl;
	return 0;
}	//end of main function