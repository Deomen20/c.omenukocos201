#include <iostream>
using namespace std;

int main()
{
    int age;
    cout << "Kindly input your age ; ";
    cin >> age;
    if (age < 18)
    {
        cout << "You're an Adult";
    } 
    else if (age >= 18)
    {
        cout << "You're not an Adult";
    }

    return 0;
    
}