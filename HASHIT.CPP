/*SPOJ : HASHIT - Hash it! by Rajesh*/

#include "iostream"
#include "stdio.h"
#include "map"
#include "cstring"
#include "string"

using namespace std;

int Genarating_key(char *skey)
{
	int hash = 0, i;
	for(i=0;skey[i];i++)
		hash += skey[i]*(i+1);
	hash *= 19;
	return hash % 101;
}

int Add_Hash(int hkey, bool *flag)
{
	for(int j=0;j<=19;j++)
		if(!flag[(hkey + j*(j+23))%101])
		{
		 return (hkey + j*(j+23))%101;
		}
	return -1;
}

int main()
{
	int tc, num_of_ope, i, pos, count;
	char op[10], str[30], input[100];
	string s, hashtable[101];
	cin>>tc;
	while(tc--)
	{
		map <string, int> hash_map;
		bool flag[101] = {0};
		count = 0;
		cin>>num_of_ope;
		for(i=0;i<num_of_ope;i++)
		{
			scanf("%s",input);
			strcpy(op,strtok(input,": "));
			strcpy(str,strtok(0,""));
			s = str;
			if(!strcmp(op,"ADD"))
			{
				if(hash_map.find(s)==hash_map.end())
				{
					pos = Add_Hash(Genarating_key(str),flag);
					if(pos != -1)
					{
						count++;
						flag[pos] = 1;
						hashtable[pos] = s;
						hash_map.insert(pair<string, int>(s, pos));
					}
				}
			}
			else if(!strcmp(op,"DEL"))
			{
				if(hash_map.find(s)!=hash_map.end())
				{
					flag[hash_map[s]] = 0;
					hash_map.erase(s);
					count--;
				}
			}
		}
		
		cout<<count<<endl;
		for(i=0;i<101;i++)
		{
		   if(flag[i])
		   {
		     cout<<i<<":"<<hashtable[i].c_str()<<endl;		
		   }
		}
			
	}
	return 0;
}

