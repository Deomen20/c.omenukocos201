#include <iostream>

using namespace std;

int main()
{
    double fahrenheit1 ;
    double celsius1 ;
    cout << " Input the value of fahrenheit to be converted : " ;
    cin >> fahrenheit1 ;
    celsius1 = ((5.0 / 9.0)* (fahrenheit1 - 32));
    cout << " Your Celsius is>>> " << celsius1 << endl;

    double fahrenheit2 ;
    double celsius2 ;
    cout << " Input the value of celsius to be converted : " ;
    cin >> celsius2 ;
    fahrenheit2 = (celsius2 * 1.8) + 32;
    cout << " Your fahrenheit is>>> " << fahrenheit2 ;
}