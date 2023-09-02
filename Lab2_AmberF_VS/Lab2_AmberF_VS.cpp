#include <iostream>
using std::cin;
using std::cout;
using std::ios;

#include <fstream>
using std::ofstream;
using std::ifstream;

#include <string>
using std::string;
using std::getline;

#include <iomanip>
/*********************************************************************
* Name: Amber Fisk
* Lab 2:Making Exact Change
* Editor(s) used: Notepad ++
* Compiler(s) used: Microsoft Visual Studio
* Description:This program takes input from the user and displays exact change. 
**********************************************************************/;


// Declaring function prototypes
void print_id(string lab_desc);

int main(){  

	double total;
	double purchase_amount, amount_tendered;	
	
	cout << "Enter the purchase amount and amount tendered: "; //prompt user for input
	cin >> purchase_amount >> amount_tendered;//allows user to enter both amounts on the same line.

	cout << std::fixed << std::setprecision(2);// set precision for 2 decimal places

	total = (amount_tendered - purchase_amount);// total calculation

	if (!cin) {
		cout << "Invalid input. please only enter numbers.";
	}
	 else if (amount_tendered <= purchase_amount || total == 0) {
		cout << "Invalid input\n\n\n";
	}
	else {
		cout << "$" << total << std::endl; // Valid input: calculate and display the total
	}

		 


	print_id("lab2_"); 

}

void print_id(string lab_desc) {
	cout << "Amber Fisk\n";
	cout << lab_desc;
	cout << "Editor(s) used:Notepad ++\n";
	cout << "Compiler(s) used:Microsoft Visual Studio\n";
	cout << "File: " << __FILE__ << '\n';
	cout << "Compiled: " << __DATE__ << " at " << __TIME__ << "\n\n";
}



//$50 bill, $20 bill, $10 bill, $5 bill, $1 bill, 50-cent coin, 
// 25-cent coin, 10-cent coin, 5-cent coin, 1-cent coin.