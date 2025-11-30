#include <iostream>
using namespace std;

bool verifypin(int correctPin);
void displaymenu();
double viewbalance(double balance);
double depositmoney(double balance);
double withdrawmoney(double balance, double dailyLimit);
int resetpin(int currentPin);


int main(){

    double balance = 50000;
    double dailyLimit = 20000;
    int userpin = 4321;

    cout << "Welcome to the ATM" << endl;

     int choice;
  do {
        displaymenu();
        cin >> choice;

        switch(choice){
            case 1:
                balance = viewbalance(balance);
                break;

            case 2:
                balance = depositmoney(balance);
                break;

            case 3:
                balance = withdrawmoney(balance, dailyLimit);
                break;

            case 4:
                userpin = resetpin(userpin);
                break;

            case 5:
                cout << "Thank you for using our ATM.\n";
                break;

            default:
                cout << "Invalid choice.\n";
        }    
            
  } while (choice != 5);
        return 0;

}
  bool verifypin(int correctPin){
    int userpin;
    int attempts = 0;

    while (attempts < 3){
        cout << "Enter PIN: ";
        cin >> userpin;
        
        if (userpin == correctPin){
            return true;
        }

        cout << "Incorrect PIN. Try again. \n";
        attempts++;

    }

    return false;
  }

  void displaymenu() {
    cout << "\n======== ATM MENU ========\n";
    cout << "1. View Balance\n";
    cout << "2. Deposit Cash\n";
    cout << "3. Withdraw Cash\n";
    cout << "4. Reset PIN\n";
    cout << "5. Exit\n";
    cout << "Enter your choice: ";
}

double viewbalance(double balance) {
    cout << "Current balance: ₦" << balance << "\n";
    return balance;
}

double depositmoney(double balance) {
    double amt;
    cout << "Enter amount to deposit: ";
    cin >> amt;

    if (amt > 0) balance += amt;
    else cout << "Invalid amount.\n";

    return balance;
}

double withdrawmoney(double balance, double dailyLimit) {
    double amt;
    cout << "Enter amount to withdraw: ";
    cin >> amt;

    if (amt > balance) {
        cout << "Insufficient funds.\n";
    }
    else if (amt > dailyLimit) {
        cout << "Exceeds daily limit.\n";
    }
    else if (amt <= 0) {
        cout << "Invalid amount.\n";
    }
    else {
        balance -= amt;
        cout << "Withdrawal successful.\n";
    }

    return balance;
}

int resetpin(int currentPin) {
    int oldPin, newPin;

    cout << "Enter old PIN: ";
    cin >> oldPin;

    if (oldPin != currentPin) {
        cout << "Incorrect PIN.\n";
        return currentPin;
    }

    cout << "Enter new PIN: ";
    cin >> newPin;

    cout << "PIN changed successfully.\n";
    return newPin;
}