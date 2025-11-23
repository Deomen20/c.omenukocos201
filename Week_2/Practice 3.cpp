#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    srand(time(0));
    int num1 = rand() % 10;
    int num2 = rand() % 10;
    if (num1 < num2){
        int newnum1 = num1;
        num1 = num2;
        num2 = newnum1;
    }

    int answer;
    cout << "What is " << num1 << " - " << num2 <<"?"<< endl;
    cout << "The answer is : ";
    cin >> answer;

    if (answer == num1 - num2){
        cout << "Your answer is correct!!!";
    } else {
        cout << "Oopsss, Wrong Answer";
    }

    return 0;

}