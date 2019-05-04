#include <iostream>
#include <conio.h>
using namespace std;

int main ()
{
	int LastBill, CurrentBill, WaterDemand = 35, GallonCharge = 20, gallons;
	double CPGallon = 1.10, bill;
	char LateBalance, x;
	
	cout<< "What is your previous Water Meter Reading?: "; cin>>LastBill;
	cout<< "\nWhat is your current Water Meter Reading?: "; cin>>CurrentBill;
	cout<< "\nDid you pay the previous Bill? (Press 'Y' or 'N'): ";cin>>LateBalance;
	gallons= CurrentBill - LastBill;
	if (LateBalance == 'Y')
	{
		bill=(CPGallon*gallons)+ WaterDemand;
	}
	else
	{
		bill=(CPGallon*gallons)+WaterDemand+GallonCharge;
	}
	cout<<"\nYour Water Bill is= "<<bill<<" Pesos"<<endl;

 getch();
 return 0;
}
