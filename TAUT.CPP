/* SPOJ : TAUT - Tautology by Rajesh*/

#include "iostream"
#include "cstdio"
#include "vector"
#include "algorithm"
#include "set"
#include "string.h"
using namespace std;
char exprsn[1000];
int varIndex[256], argu, K, position;
bool check()
{
char c = exprsn[position++];
if (islower(c)) {
return (argu & (1 << varIndex[c])) != 0;
} else if (c == 'N') {
return !check();
} else {
bool a = check();
bool b = check();
switch (c) {
case 'C': return a & b;
case 'D': return a | b;
case 'I': return (!a) | b;
case 'E': return a == b;
}
return false;
}
}
int main()
{
int tc;
cin>>tc;
for (int t = 0; t < tc; t++)
{
cin>>exprsn;
memset(varIndex, 0xff, sizeof(varIndex));
K = 0;
for (int i = 0; exprsn[i]; i++)
{
if (islower(exprsn[i]) && varIndex[exprsn[i]] < 0)
{
varIndex[exprsn[i]] = K++;
}
}
bool Tautology = true;
for (argu = 0; argu < (1 << K); argu++)
{
position = 0;
if (check() == false) {
Tautology = false;
break;
}
}
if(Tautology)
cout<<"YES"<<endl;
else
cout<<"NO"<<endl;
}
return 0;
}
