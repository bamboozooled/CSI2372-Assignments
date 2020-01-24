// ------------------------------------------------------------------------------
// Assignment 1
// Written by: Oluwatimi Owoturo 8606957, Uduak Udofia 7803807 
// For CSI2372 Section A – Fall 2019
// -----------------------------------------------------------------------------
#include <stdio.h>
#include <iostream>
#include <string>
#include <math.h>
using namespace std;
void exercise2();
int main(){
    exercise2();
    return 0;
}
void exercise2(){
    int u;
    int v;
    int a;
    int b;

    cout << "Enter a number for a" << endl;
    cin >> a;
    cout << "Enter a number for b" << endl;
    cin >> b;
    
    u = static_cast<int>(pow(static_cast<double>(a+b), 2.0));
    v = static_cast<int>(pow(static_cast<double>(a-b), 2.0));

    string uString = to_string(u);
    string vString = to_string(v);
    
     cout << "U = " + uString + " and V = " + vString << endl;
}