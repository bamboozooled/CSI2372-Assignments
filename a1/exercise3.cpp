#include <stdio.h>
#include <iostream>
// ------------------------------------------------------------------------------
// Assignment 1
// Written by: Oluwatimi Owoturo 8606957, Uduak Udofia 7803807 
// For CSI2372 Section A – Fall 2019
// -----------------------------------------------------------------------------
#include <string>
#include <math.h>
#include <vector>
#include <ctype.h>
using namespace std;
void exercise3();
int main(){
    exercise3();
    return 0;
}
void exercise3(){

    int input = 0;
    vector<int> arr;
    while (input >= 0){
        cout << "Enter a postive number" << endl;
        cin >> input;
        arr.push_back(input);
    }
    int maxElem = -1;

    for (auto x: arr){
        if (x > maxElem){
            maxElem = x;
        }
    }
    string answer = to_string(maxElem);
    cout << "Largest Integer in sequence = " + answer << endl;
}