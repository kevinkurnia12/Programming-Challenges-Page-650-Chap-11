// Programming Challenges page 652 No 7
// Soccer Shoes

#include <iostream>
#include <string>

using namespace std;

struct accCustomer{
	string name;
	string address;
	string cityStateZIP;
	string telNumber;
	unsigned int accBalance;
	int datePayment;
};

int main(){
	accCustomer customers[10];
	
	for (int x=0; x<10; x++){
		cout << "Name : ";
	    getline(cin, customers[x].name);
		cout << "Address : ";
		getline(cin, customers[x].address);
		cout << "City, State, ZIP : ";
		getline(cin, customers[x].cityStateZIP);
		cout << "Telephone Number : ";
		getline(cin, customers[x].telNumber);
		cout << "Account Balance : ";
		cin >> customers[x].accBalance;
		cout << "Date of last payment : ";
		cin >> customers[x].datePayment;
		cin.ignore();
		cout << endl << endl;
	
	}
	return 0;
}


