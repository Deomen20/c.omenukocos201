#include <iostream>
using namespace std;

int main (){
    double purchaseAmount;
    cout << "Enter purchase amount: ";
    cin >> purchaseAmount;

    double tax ;
    cin >> tax;
    tax - purchaseAmount = 0.06;
    cout << "Sales tax is " << static_cast<int>(tax * 100)/ 100.0;
    return 0;
}

















// int main(){
//     int i = 10;
//     int newnum = 10 * i++;
//     cout << "i is " << "" << i << ". Newnum is "<< newnum  << endl;
// }


// #include <string>
// void printvalue(string val){

//     cout << val;
// }
// int main(){
//     printvalue("Hello,World");
//     return 0;
// }

// int main (){
// double number1, number2, number3;

// cout << "Enter three numbers: ";
// cin >> number1 >> number2 >> number3;

// double average = (number1 + number2 + number3) / 3 ;
// cout << " The average of "<< number1 << ", "<< number2 <<" ,"<< number3<<" is "<< average << endl;

// return 0;
// }