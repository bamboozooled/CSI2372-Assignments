// ------------------------------------------------------------------------------
// Assignment 2
// Written by: Oluwatimi Owoturo 8606957, Uduak Udofia 7803807 
// For CSI2372 Section A – Fall 2019
// -----------------------------------------------------------------------------
#include <iostream>

using namespace std;

struct Complex{
    double r, i;
};
void display_by_value(Complex c);
void display_by_pointer(Complex* pc);
void display_by_refrence(Complex& rc);
int main()
{
    Complex data = {.r = 1, .i = 1};
    display_by_value(data);
    display_by_pointer(&data);
    display_by_refrence(data);

    return 0;
}

void display_by_value(Complex c) {
    cout << "Output data by value" << endl;
    cout << "r = " << c.r << " i = " << c.i << endl;
}

void display_by_pointer(Complex* pc){
    cout << "Output data by pointer" << endl;
    cout << "r = " << (*pc).r << " i = " << (*pc).i << endl;
}

void display_by_refrence(Complex& rc){
    cout << "Output data by refrence" << endl;
    cout << "r = " << rc.r << " i = " << rc.i << endl;
}