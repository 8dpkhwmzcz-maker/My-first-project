#include <iostream>
using namespace std;
int main()
{
    cout << "Enter your gender (M/F)";
    char gender;
    
    cin >> gender;
    if(gender ==  'M')
    cout << "Your gender is Male ";
    else if(gender == 'F')

    cout << "Your gender is Female ";

    else 
    cout << "INVALID";
    return 0;

    
}