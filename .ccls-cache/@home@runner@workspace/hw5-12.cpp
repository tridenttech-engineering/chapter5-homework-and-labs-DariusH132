//hw5-12.cpp - displays the total owed
//Created/revised by <Darius Haywood> on <2/18/25>

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	//declare variables
	double total, price1, price2;

	std::cout << "Enter price 1: ";
	std::cin >> price1;
	std::cout << "Enter price 2: ";
	std::cin >> price2;

	if(price1 > price2){
		total = price1 + (price2 / 2);
		
	}
		else{
			total = price2 + (price1 / 2);
	}
	cout << fixed << setprecision(2);
	cout << "Total: " << total << endl;
	
	return 0;
}	//end of main function