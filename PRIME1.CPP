#include "iostream"
#include "math.h"

using namespace std;

int checkprime(int isprime)  
 {  
   if(isprime == 1)  
   {  
     return 0;  
   }  
   int sqrroot = sqrt(isprime);  
   for(int i = 2 ; i<=sqrroot ; i++)  
   {  
     if (isprime%i == 0)  
       {  
         return 0;  
       }  
   }  
   return 1;  
 }  


int main(int argc, char const *argv[])
{
	int tc,m,n;
	cin >>tc;
	while(tc--)
	{
		cin>>m>>n;
		for (int i = m; i <= n; ++i)
		{
			/* code */
			if (checkprime(i))
			{
				cout<<i<<endl;
			}
		}
	}	
	return 0;
}