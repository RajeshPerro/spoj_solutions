/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
/*
 * File: main.cpp
 * Author: rajesh
 *
 * Created on October 27, 2016, 11:36 AM
 */
#include <iostream>
using namespace std;
int main(int argc, char** argv)
{
long int len,pal1,pal2,lastnon9=-1,i;
bool smaller=1;
string num;
int tc;
cin>>tc;
while(tc--)
{
 smaller=1;
 string temp;
 lastnon9=-1;
 cin>>num;
 len=num.length();
 if(len==1)
 {
 if(num[0]=='9')
 cout<<"11"<<endl;
 else
 {
 cout<<(char)(num[0]+1)<<endl;
 }
 }
 else
 {
 pal1=0;pal2=len-1;
 if((len%2)==0)
 {
 while(pal2!=(pal1+1))
 {
 if(num[pal1]!='9')
{
 lastnon9=pal1;
}
 if(num[pal1]>num[pal2])
 {
 smaller=0;num[pal2]=num[pal1];
 }
 else if(num[pal1]<num[pal2])
 {
 smaller=1;num[pal2]=num[pal1];
 }
 pal1++;
 pal2--;
 }
 if(num[pal1]!=num[pal2])
 {
 if(num[pal1]>num[pal2])
 {
 num[pal2]=num[pal1];
 }
 else
 {
 num[pal1]=(char)(num[pal1]+1);
 num[pal2]=num[pal1];
 }
 cout<<num<<endl;
 }
 else
 {
 if(num[pal1]!='9'&&(smaller==1))
 {
 num[pal1]=(char)(num[pal1]+1);
 num[pal2]=(char)(num[pal2]+1);
 cout<<num<<endl;
 }
 else if(smaller==1)
 {
 if(lastnon9==-1)
 {
 temp+='1';
 for(i=lastnon9+1;i<len-2-lastnon9;i++)
 {
 temp+='0';
 }
 temp+='1';
 cout<<temp<<endl;
 }
 else
 {
 for(i=lastnon9+1;i<len-1-lastnon9;i++)
 {
 num[i]='0';num[len-1-i]='0';
 }
 num[lastnon9]=(char)(num[lastnon9]+1);
 num[len-1-lastnon9]=(char)(num[len-1-lastnon9]+1);
 cout<<num<<endl;
 }
 }
 else
 {
 cout<<num<<endl;
 }
}
 }
else
{
 smaller=1;
while(pal1!=pal2)
{
if(num[pal1]!='9')
{
 lastnon9=pal1;
}
if(num[pal1]>num[pal2])
{
smaller=0;
num[pal2]=num[pal1];
}
else if(num[pal1]<num[pal2])
{
smaller=1;num[pal2]=num[pal1];
}
pal1++;
pal2--;
}
if(smaller==0)
{
 cout<<num<<endl;
}
else
{
if(num[pal1]!='9')
{
num[pal1]=(char)(num[pal1]+1);
cout<<num<<endl;
}
else
{
 if(lastnon9==-1){temp+='1';
 for(i=lastnon9+1;i<len-2-lastnon9;i++)
 {
 temp+='0';
 }
 temp+='1';
 cout<<temp<<endl;
 }
 else
 {
 for(i=lastnon9+1;i<len-1-lastnon9;i++)
 {
 num[i]='0';num[len-1-i]='0';
 }
 num[lastnon9]=(char)(num[lastnon9]+1);
 num[len-1-lastnon9]=(char)(num[len-1-lastnon9]+1);
 cout<<num<<endl;
 }
}
}
}
}
}
 return 0;
}
