/*Spoj- FCTRL2 by Rajesh Ghosh*/
#include"iostream"
using namespace std;
int main()
{
 int t;
 cin>>t;
 while(t--) 
 {
 int array[200],reminder,i=0,n,m=0,flag;
 cin>>n;
 flag = n;
 while(flag!=0) {
 reminder = flag%10;
 array[i] = reminder;
 flag = flag/10;
 i++;
 m++;
 }
 int temp,x=0,index=0;
 for(i=2;i<n;i++) {
 temp = 0;
 for(index=0;index<m;index++) {
 x = array[index]*i + temp;
 array[index] = x%10;
 temp = x/10;
 }
 while(temp!=0) {
 array[index] = temp % 10;
 temp = temp/10;
 index++;
 m++;
 }
 }
 for(i=m-1;i>=0;i--) {cout<<array[i];}
 cout<<"\n";
 }
return 0;
}
