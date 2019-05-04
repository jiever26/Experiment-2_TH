#include <iostream>
#include <conio.h>
using namespace std;
 
int main()
{
   int constant, x, g1=0, g2=1;
   const int i=22;
 
   cout<<"The first 20 constants of the Fibonnaci sequence are the following: \n\n";
   for(x= 0; x<i; x++)
   {
      if(x<=1)
        constant=x;
      else
      {
        constant=g1+g2;
        g1=g2;
        g2=constant;
      }
      cout<<constant<<",";
   }
    getch();
    return 0;
}
