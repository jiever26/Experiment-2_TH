    
#include<iostream>
#include <cstdlib>
#include <iomanip>
#include <math.h>
#include <conio.h>

using namespace std;
int main()
{
	double var,x,y,v;
	int var1;
	const double z=2.5;
	
	cout<<"Place your desired value of x: ";cin>> x;
	cout<< "\nPlace your desired value of y: ";cin>>y;
	switch(x<3)
{
    case 1: 
	 if(y>1&&y<5){
	 v=x*y*z;
	 cout<< "\nV is: "<<v<<setprecision(2);
}else if (y>=5)
{
	v=x+(y/z);
	cout<< "\nV is: "<<v<<setprecision(2);}
else
{
	v=x+y+z;
	cout<< "\nV is: "<<v<<setprecision(2);
}
break;

    case 2:
	 if(y<=5){
	 var=(x-y)/z;
	 v=abs(var1);
	 cout<< "\nV is: "<<v<<setprecision(2);
}else if (y>5)
{
	var=sqrt(x+z);
	v=x-var;
	cout<< "\nV is: "<<v<<setprecision(2);}
else
{
	v=x+y+z;
	cout<< "\nV is: "<<v<<setprecision(2);
}
break;
    
	default:
	 v=x+y+z;
	 cout << "\nV is equal to: "<< v<<setprecision(2);
}

 getch();
 return 0;
 
}
