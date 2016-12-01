/*SBANK - Sorting Bank Accounts by Rajesh*/
#include "iostream"
#include "stdio.h"
#include "cstring"
#include "stdlib.h"
#include "string"
#include "map"
#include "vector"
#include "algorithm"
#include "functional"

using namespace std;

int main(int argc, char const *argv[])
{
	
	int tc,num;
	char st[10000];
	std::map<string,int> b_map;
	map <string, int> :: iterator it;
	cin>>tc;
	for (int t = 0; t < tc; ++t)
	{
		scanf("%d",&num);
		
		for (int i = 0; i <= num; i++)
		{
			gets(st);
			b_map[(string)st]++;
			
		}
		int flag=0;

		for(it=b_map.begin(); it!=b_map.end();it++)
		{
			if (flag == 1)
			{
				printf("%s %d\n",it->first.c_str(),it->second);
			}
			flag=1;
		  	

		}
		cout<<endl;
		b_map.clear();
	}

	return 0;
}