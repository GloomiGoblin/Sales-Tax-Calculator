#include <iostream>
using namespace std;

int main()
{
	int numItems1, numItems2, priceperitem1, priceperitem2, total;   //declaring variables
	float totalTax, GrandTotal;
	
	cout << "Welcome. Type the number and press ENTER. \n";     //initiating series of output to prompt input from user
	cout << "How many books are you taking today? ";
	cin >> numItems1;
	cout << "What is the price per book? $";
	cin >> priceperitem1;
	cout << "How many folders? ";
	cin >> numItems2;
	cout << "What is the price per folder? $";
	cin >> priceperitem2;

	total = (numItems1 * priceperitem1) + (numItems2 * priceperitem2);     //total pre-tax

	totalTax = (total * 0.075);					//calculating total tax
	GrandTotal = (total + totalTax);			//calculating grand total owed by user

	cout << "The total tax owed is $" << totalTax << ". \n";			//output giving user information on costs
	cout << "Your grand total is $" << GrandTotal << ". \n \n";
	cout << "Please proceed to the payment zone. CASH ONLY.\n \nThank you for shopping at EdStuff.com. Have a wonderful day!" << endl;


	system ("pause");
	}