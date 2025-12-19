#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){	
	double loan, rate, pay;
    cin >> loan >> rate >> pay;
    
	cout << "Enter initial loan: ";
	cout << "Enter interest rate per year (%): ";
	cout << "Enter amount you can pay per year: ";

	//use 'setw' to set width of table and 'left' to set left-alignment
	//you can change input argument of 'setw()' to see the effect
	//Try to change from 'left' to 'right' and see the effect
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
	//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	//you can change input argument of 'setprecision()' to see the effect
	cout << fixed << setprecision(2); 
	double prev = loan;
    int year = 1;

    while (prev > 0) {
        double interest = prev * rate / 100.0;
        double total = prev + interest;
        double payment = (pay > total) ? total : pay;
        double next = total - payment;

        cout << setw(13) << left << year
            << setw(13) << prev
            << setw(13) << interest
            << setw(13) << total
            << setw(13) << payment
            << setw(13) << next << "\n";

        prev = next;
        year++;
    }
	return 0;
}
