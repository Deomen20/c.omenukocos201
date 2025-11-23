#include <iostream>
using namespace std;

int main ()
{

    int year;
    int zodiac;

    cout << "Enter your year for the Chinese Zodiac sign";
    cin >> year;
    zodiac = year % 12;


    switch (zodiac)
    {
        case 0:
            cout<< "monkey";
            break;
        case 1:
            cout << "Rooster";
            break;
        case 2:
            cout << "Dog";
            break;
        case 3:
            cout << "Pig";
            break;
        case 4:
            cout<< "Rat";
            break;
        case 5:
            cout << "Ox";
            break;
        case 6:
            cout << "Tiger";
            break;
        case 7:
            cout << "Rabbit";
            break;
        case 8:
            cout<< "Dragon";
            break;
        case 9:
            cout << "Snake";
            break;
        case 10:
            cout << "Horse";
            break;
        case 11:
            cout << "Sheep";
            break;
        default:
            cout << "Invalid input";
   }
   return 0;
}