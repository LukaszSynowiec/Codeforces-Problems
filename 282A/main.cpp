#include <iostream>
#include <string>
using namespace std;

int main()
{
	int q;
	cin>>q;
	int x=0;
	for (int i = 0; i < q; ++i)
	{
		string s;
		cin>>s;
		int siz=s.size();
		for(int y=0;y<siz;y+=1)
		{
			if(s[y]=='+')
			{
				x++;
				y++;
			}
			if(s[y]=='-')
			{
				x--;
				y++;
	    }
	  }
	}
	cout<<x<<endl;
	return 0;
}
