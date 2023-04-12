#include <iostream>
using namespace std;

int main() {
    int balance = 1000;
    string pin = "0000",enteredPin,number;
    int numAttempts = 0;
    
    while (true) {
        /*Authentication*/
        cout << "INPUT PIN: ";
        cin >> enteredPin;
        if (enteredPin != pin) {
            numAttempts++;
            if (numAttempts >= 3) {
                cout << "Too many wrong attempts. Exiting." << endl;
                return 0;
            }
            cout << "Incorrect Pin. Kindly  try again." << endl;
            continue;
        }
        numAttempts = 0; 
        
        /*Menu*/
        cout << "Select an option:" << endl;
        cout << "1. Reset Pin" << endl;
        cout << "2. Check balance" << endl;
        cout << "3. Send money" << endl;
        cout << "4. Exit" << endl;
        int option;
        cin >> option;
        
        /* Option 1: Reset Pin*/
        if (option == 1) {
            cout << "Enter new PIN: ";
            cin >>enteredPin;
            cout<<"Enter Old pin to set New Pin: ";
            cin>>enteredPin;
            if(enteredPin==pin){ cout << "PIN reset successful." << endl;return 0;}
            else{cout<<"Pin reset failed."<<endl; return 0;}}
        
        /*Option 2: Check balance*/
        else if (option == 2) {cout<<"Enter pin to continue: ";
        cin>>enteredPin;
        if(enteredPin==pin){cout << "Current balance:Ghs " << balance << endl;return 0;}
		else{cout<<"Incorrect pin input. Exiting."<<endl;
		} }
      
        /*Option 3: Send money*/
        else if (option == 3) {
            double amount;
            cout<<"Enter receipient number: ";
            cin>>number;
            cout << "Enter amount to send: ";
            cin >> amount;
            if (amount > balance) {
                cout << "Balance is not enough." << endl;
				cout <<"Top up and try again."<<endl;return 0;
} 
                else {  balance -= amount;
                cout << "Transaction successful. New balance: Ghs " <<balance-amount<< endl;
                cout<<"Transaction fee is Ghs 0.00"<<endl;
return 0;
            }
        }
        
        /*Option 4: Exit*/
        else if (option == 4) {
            cout << "Exiting program." << endl;
            return 0;
        }
        
        /*Invalid option*/
       else {
            cout << "Invalid option. Please re-enter pin and choose a valid option." << endl; 
        }
    }
}
