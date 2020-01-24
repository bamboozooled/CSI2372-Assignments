// ------------------------------------------------------------------------------
// Assignment 3 & 4 Exercise2.cpp
// Written by: Oluwatimi Owoturo 8606957, Uduak Udofia 7803807 
// For CSI2372 Section A – Fall 2019
// -----------------------------------------------------------------------------

#include <stdio.h>
#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main(){
    cout << "Give the file name to read : ";
    string fileName;
    cin >> fileName;
    string line;
    ifstream file(fileName);
    if (file.is_open()){
        cout << "*** List of the file *** : " << fileName << endl;
        int lineNumber = 1;
        while (getline(file, line)){
            cout << lineNumber << " " << line << '\n';
            lineNumber++;
        }
        file.close();
    }
}
