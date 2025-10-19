#include <iostream>

using namespace std;
const double pi = 3.142;
int main ()
{
    // double r = 20;
    double r;
    cout << "Input a value for your radius, r :";
    cin >> r ;
    double Area = r * r * pi;
    cout << " Your value for area is :" << Area ;
    return 0 ;
}