//Lab7-4.cpp - displays the average electric bill
//Created/revised by <your name> on <current date>

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double avgBill = 0.0;
	double bill = 0.0;
	double totalBills = 0.0;
	int months = 0;

	while(bill != -1)
		{cout << "Bill for month " << months + 1 << ": ";
		cin >> bill;
		totalBills += bill;
		months += 1;
		}
	avgBill = (totalBills + 1) / (months - 1);
	cout << fixed << setprecision(2);
	cout << "Average electric bill for " << months << " months: $" << avgBill << endl;

	
	return 0;
}	//end of main function

