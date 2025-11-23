#include <iostream>
using namespace std;

int main(){
    int day;

    cout << "Enter a day \n";
    cin >> day;

    switch (day){
        case 1 :
          cout<< "Weekday";
         break;
        case 2:
          cout << "Weekday";
          break;
        case 3 :
          cout<< "Weekday";
          break;
        case 4:
          cout << "Weekday";
          break;
        case 5 :
          cout<< "Weekday";
          break;
        case 6:
          cout << "Weekend";
          break;
        case 0 :
          cout<< "Weekend";
          break;
        
    }

    // if((day == 1 )|| (day ==2) ||( day ==3 )|| (day ==4)||( day = 5)){
    //     cout << "weekday \n";
    // }else if((day == 6) || (day == 0)){
    //     cout << "weekend \n";
    // }else{
    //     cout << "Not a day";
    // }
}