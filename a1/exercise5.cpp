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
long conversion(char* s);

int main(){
    char str[10] = {};
    string a;
    cout << "Enter a string with 9 digits only"<< endl;
    cin >> a;
    int i = 0;
    for (char& c: a){
        str[i] = c;
        i++;
    }

    cout << conversion(str) << endl;
    return 0;
    
}
long conversion(char* s){
    string builder = "";
    for (int i = 0; i <= sizeof(s); ++i){
        if (isdigit(*s)){
            builder += *s;
        }
        *s++;
    }
    return stol(builder);
}