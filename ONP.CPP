/*SPOJ : ONP - Transform the Expression by Rajesh*/

#include "iostream"
#include "stack"
#include "cctype"
#include "algorithm"
#include "cstring"
#include "stdlib.h"
using namespace std;
int main(int argc, char const *argv[])
{
int tc;
cin >>tc;
 char input_str[10010];
 stack <char> sc;
for (int i = 0; i < tc; ++i)
{
cin>>input_str;
int len = strlen(input_str);
for (int j = 0; j < len; ++j)
{
if(isalpha(input_str[j]))
{
cout<<input_str[j];
}
else if (input_str[j] == ')')
{
cout<<sc.top();
sc.pop();
}
else if (input_str[j] != '(')
{
sc.push(input_str[j]);
}
}
cout<<endl;
}
return 0;
}
