//Lab7-3.cpp - calculates the average number of text
//messages sent each day for 7 days
//Created/revised by <your name> on <current date>

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{	
    int day = 0;
        int totaltexts = 0;
        int texts = 0;
        double average = 0;

        while (day < 7)
            {day = day + 1;
                cout << "Enter the number of texts for day " << day << ": ";
        cin >> texts;
        totaltexts = totaltexts + texts;
    }
        average = static_cast<double>(totaltexts) / (day);
        cout << fixed << setprecision(0);
        cout << "Average number of texts: " << average << endl;
    return 0;
}   //end of main function