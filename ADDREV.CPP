/*SPOJ: ADDREV - Adding Reversed Numbers by Rajesh*/

#include "iostream"
using namespace std;
int revnum(int num)
{
 int reverse =0;
 while(num != 0) {
int remainder = num%10;
reverse = reverse*10 + remainder;
num/=10;
}
return reverse;
}
int main()
{
int tc, number1,number2;
cin>>tc;
for(int i=0;i<tc;i++)
{
 cin>>number1>>number2;
 int firstrev=revnum(number1);
 int secondrev = revnum(number2);
 int sum = firstrev+secondrev;
 int result = revnum(sum);
 cout<<result<<endl;
}
return 0;
}
