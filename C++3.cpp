#include <iostream>
using namespace std;
int main()
{
    double num;
    cout <<  "Enter  a number: ";
    cin >> num;
    if (num > 0)
    cout << "Your number is positive. " << endl;

    else if (num < 0)
    cout << "Your number is negative. " << endl;

    else 
    cout << "your number is zero. " << endl;
    
}