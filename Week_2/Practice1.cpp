#include <iostream>
using namespace std;

int main()
{
int x;
cout << "Enter your input : ";
cin >> x;

    if ( x % 5 == 0)
    {
        cout << "HIFIVE";
    } 
    else if (x % 2 == 0)
    {
        cout << "HIEVEN";
    }
    return 0;
}