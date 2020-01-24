// ------------------------------------------------------------------------------
// Assignment 1
// Written by: Oluwatimi Owoturo 8606957, Uduak Udofia 7803807 
// For CSI2372 Section A – Fall 2019
// -----------------------------------------------------------------------------
#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;
int read_number();
int main(){
    int i, n;
    long total = 0;

    n = read_number();
    for (int i = 1; i <= n; i++){
        total += i;

        cout << "i = " + to_string(i) + " Total = " + to_string(total) << endl;
    }

    cout << "Final Total = " + to_string(total) << endl;
    return 0;
}

int read_number(){
    int n;
    cout << "Enter a number" << endl;
    cin >> n;

    return n;
}