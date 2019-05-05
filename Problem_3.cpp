#include<iostream>
#include <cstdlib>
#include <iomanip>
#include <math.h>
#include <conio.h>
#include <cmath>

using namespace std;
int main()
{
	double var1,var,v,y;
	const double z=2.5;
	int x;
	
	cout <<"Place your desired value of x: ";
	cin>> x;
	cout << "\nPlace your desired value of y: ";
	cin>>y;

switch(x)
{
	case 1: 
      if(y>1&&y<5){
      v=x*y*z;
	  cout << "\nV is: "<<setw(10)<<v<<setprecision(2);
}
else if (y>=5)
{
  	v=x+(y/z);
    cout << "\nV is: "<<setw(10)<<v<<setprecision(2);
}
else
{
    v=x+y+z;
    cout << "\nV is: "<<setw(10)<<v<<setprecision(2);
}
break;
  
    case 2:
      if(y<=5)
{
	var1=(x-y)/z;
    v=abs(var1);
    cout << "\nV is: "<<setw(10)<<v<<setprecision(2);
}
else if (y>5)
{
    var=sqrt(y+z);
    v=x-var;
    cout << "\nV is: "<<setw(10)<<v<<setprecision(2);
}
else
{
    v=x+y+z;
    cout << "\nV is: "<<setw(10)<<v<<setprecision(2);
}
break;

    default:
      v=x+y+z;
      cout << "\nV is: "<<setw(10)<<v<<setprecision(2);
}

  getch();
  return 0;

}

