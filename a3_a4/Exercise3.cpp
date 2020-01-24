// ------------------------------------------------------------------------------
// Assignment 3 & 4 Exercise3.cpp
// Written by: Oluwatimi Owoturo 8606957, Uduak Udofia 7803807 
// For CSI2372 Section A – Fall 2019
// -----------------------------------------------------------------------------

#include <stdio.h>
#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main(){
    cout << "Give the file name to output to : ";
    string fileName;
    cin >> fileName;
    ofstream file(fileName);
    
    if (file.is_open()){
        string lastName;
        string firstName;
        string age;
        string phone;
        string quit;
        
        while (true){
            // Saving user inputs to variables and displaying input with variables
            cout << "LastName : ";
            cin >> lastName;
            cout << "firstName : ";
            cin >> firstName;
            cout << "Age : ";
            cin >> age;
            cout << "Phone : ";
            cin >> phone;
            cout << endl;
            
            //Writing data to output file
            file << "LastName : " + lastName + '\n';
            file << "firstName : " + firstName + '\n';
            file << "Age : " + age + '\n';
            file << "Phone : " + phone + '\n';
            file << '\n';
            cout << "Enter 'q' to quit or 'c' to continue" << endl;
            cin >> quit;
            if (quit == "q"){
                break;
            }
        }
        
        file.close();
        
    }
    
}
