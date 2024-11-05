//Lab7-2.cpp - Displays the number of years required
//for a company's sales to reach at least $150,000
//using a 5.5% annual growth rate. Also displays
//the sales at that time.
//Created/revised by <Cole Chapkowski> on <11/5/2024>

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const double Growth_rate = 0.055;
    double sales = 0.0;
    double annualincrease= 0.0;
    int year = 0;

    cout << "Current year's sales: ";
    cin >> sales;
    while (sales < 150000.0)
        {annualincrease = sales * Growth_rate;
        sales += annualincrease;
        year += 1;}
    cout << fixed << setprecision(0);
    cout << "sales" << year << "years from now: $" << sales << endl;
    return 0;
} //end of main function
