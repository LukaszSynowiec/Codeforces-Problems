#include<iostream>

using namespace std;


int main()
{
	int num;
	int t;
	cin>>num>>t;
	char s[num];
	for(int i=0;i<num;i++)
	{
		cin>>s[i];
	}
	for(int i=0;i<t;i++)
	{
		for(int j=1;j<=num;j++)
		{
			if(s[j-1]=='B'&&s[j]=='G')
			{
				s[j-1]='G';
				s[j]='B';
				j++;
			}
		}
		
	}
	for(int i=0;i<num;i++)
	{
		cout<<s[i];
	}

	return 0;
}
