#include <iostream>
#include <conio.h>

using namespace std;

int main () 
{
	cout<<"Counting...\n"<<endl;
  	int counter,n;
  	counter=1;
  		
  		for (n=1; n<=10; n++)
  		{
  			cout << counter << ",";
  			counter ++;
		}
		for (counter=12; counter <=30;)
  		{
  			cout << counter << ",";
  			counter +=2;  			
	}

  getch();
  return 0;
}
