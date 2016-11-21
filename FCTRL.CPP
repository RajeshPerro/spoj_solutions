/*SPOJ : FCTRL - Factorial by Rajesh*/
#include "iostream"
using namespace std;
int main()
{
 int tc, number, counter;
 cin>>tc;
 for(int i=0;i<tc;i++)
 { counter = 0;
 cin>>number;
 while(number > 0)
 {
 number = number/5;
 counter = counter + number;
 }
 cout<<counter<<endl;
 }
 return 0;
}
