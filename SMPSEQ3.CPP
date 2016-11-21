/*Spoj- SMPSEQ3 by Rajesh Ghosh*/
#include "iostream"
using namespace std;
int binarySearch(int data[], int key,int legth)
{
 int flag = 0;
 int low = 0;
 int high = legth - 1;
 while(high >= low) {
 int middle = (low + high) / 2;
 if(data[middle] == key) {
 return flag=1;
 }
 if(data[middle] < key) {
 low = middle + 1;
 }
 if(data[middle] > key) {
 high = middle - 1;
 }
 }
 return flag=0;
 }
 int main()
 {
 int s_array[1000010],q_array[1000010],unmatch_array[1000010],n,m,i,j,result,k,temp,l=0,a;
 cin>>n;
 for(i=0;i<n;i++)
 {
 cin>>s_array[i];
 }
 cin>>m;
 for(j=0;j<m;j++)
 {
 cin>>q_array[j];
 }
 for(k=0;k<n;k++)
 {
 temp = s_array[k];
 result = binarySearch(q_array,temp,m);
 if(result == 0)
 {
 // cout <<result<<"Temp : "<<temp;
 unmatch_array[l++] = temp;
 }
 }
 for(a=0;a<l;a++)
 {
 cout <<unmatch_array[a]<<" ";
 }
return 0;
 }
