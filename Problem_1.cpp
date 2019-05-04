#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	char package = 'x';
	const double packageA = 995,packageB = 1495, packageC = 1995;
	double PAextra = 20,PBextra = 10,EHUsed,EHPrice,hours,totalAmount;
	
	cout << "Please enter your monthly package A, B, or C: "; cin >> package;
	
	cout << "Please enter your monthly hours usage: "; cin >> hours;
	
	if (hours > 500)
	cout << "Invalid, Please try again." << endl;
    switch (package)
{
	case 'a':
	case 'A':
	  cout << "\nYour monthly package is package A." << endl;
	  EHUsed = hours - 10;
	  EHPrice = EHUsed * PAextra;
	  totalAmount = packageA + EHPrice;
	  cout << "You have used " << EHUsed << " extra hours." << endl;
	  cout << "Your bill is: " <<"Pesos "<< totalAmount;
	  break;
	case 'b':
	case 'B':
	  cout << "\nYour monthly package is package B." << endl;
	  EHUsed = hours - 20;
	  EHPrice = EHUsed * PBextra;
	  totalAmount = packageB + EHPrice;
	  cout << "You have used " << EHUsed << " extra hours." << endl;
	  cout << "Your bill is: " <<"Pesos "<< totalAmount;
	  break;
	case 'c':
	case 'C':
	  cout << "\nYour monthly package is package C.\n";
	  totalAmount = packageC;
	  cout << "Your bill is: " <<"Pesos "<< totalAmount;
}
    getch();
	return 0;
}
