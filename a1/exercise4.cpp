// ------------------------------------------------------------------------------
// Assignment 1
// Written by: Oluwatimi Owoturo 8606957, Uduak Udofia 7803807 
// For CSI2372 Section A – Fall 2019
// -----------------------------------------------------------------------------
#include <stdio.h>
#include <iostream>
#include <string>
#include <math.h>
#include <vector>
#include <ctype.h>
using namespace std;
void exercise4();
int main(){
    exercise4();
    return 0;
}
void exercise4(){
    double input = 0.0;
    // Vector array
    vector<double> arr;
    while (input >= 0.0){
        cout << "Enter a postive real number" << endl;
        cin >> input;
        if (input >= 0.0){
            arr.push_back(input);
        }
    }

    double nums = 0.0;

    for(auto num: arr)
    {
        nums += num;
    }
    string answer = to_string(nums / arr.size());
    cout << "Average = " + answer << endl;   
}