#include <iostream>
#include <string>
using namespace std;
int main()
{
	int x;
	cin>>x;
	string s;
	cin>>s;
	int count=0;
	for (int i = 0; i < x; i++)  
	{
        if(s[i]=='2'||s[i]=='4'||s[i]=='6'||s[i]=='8')
            count+=i+1;
	}
       

    cout<<count;
	return 0;
}

