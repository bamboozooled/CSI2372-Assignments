// ------------------------------------------------------------------------------
// Assignment 2
// Written by: Oluwatimi Owoturo 8606957, Uduak Udofia 7803807 
// For CSI2372 Section A – Fall 2019
// -----------------------------------------------------------------------------
#include <iostream>
#include <time.h>

using namespace std;

class DateCplusplus{
    public:
        int _day;
        int _month;
        int _year;
        
        DateCplusplus(){
            readValues();
        }
        
        void readValues() {
            cout << "Enter the day value" << endl;
            cin >> _day;
            cout << "Enter the month value" << endl;
            cin >> _month;
            cout << "Enter the year value since 1900" << endl;
            cin >> _year;
            int verify = verifyValues();
            cout << "Verification of day and month values : " << verify << endl;
            int compare = compareValues();
            cout << "Comparison of the day, the month and the year with the system current date : " << compare << endl;
            
        }
        
        int verifyValues() {
            if (_day > 31){
                return 0;
            } else if (_month > 12){
                return 0;
            }
            return 1;
        }
        
        int compareValues() {
            time_t result = time(NULL);
            tm* currentTime = localtime(&result);
            int currentDay = (*currentTime).tm_mday;
            int currentMonth = (*currentTime).tm_mon;
            int currentYear = (*currentTime).tm_year;
            
            if (currentDay != _day){
                return 0;
            } else if (currentMonth+1 != _month){
                return 0;
            } else if (currentYear+1900 != _year){
                return 0;
            }
            
            return 1;
        }
};

int main()
{
    DateCplusplus date = DateCplusplus();
    return 0;
}