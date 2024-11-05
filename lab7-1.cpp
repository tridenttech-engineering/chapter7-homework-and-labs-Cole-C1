//Lab7-1.cpp - calculates the average number of text
//messages sent each day for 7 days
//Created/revised by <Cole Chapkowski> on <11/5/2024>

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{	
int day = 0;
    int totaltexts = 0;
    int texts = 0;
    double average = 0;

    for (day = 1; day <= 7; day = day + 1 )
        {cout << "Enter the number of texts for day " << day << ": ";
    cin >> texts;
    totaltexts = totaltexts + texts;
}
    average = static_cast<double>(totaltexts) / (day - 1);
    cout << fixed << setprecision(0);
    cout << "Average number of texts: " << average << endl;
    return 0;
}   //end of main function