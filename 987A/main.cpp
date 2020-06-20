#include <iostream>
#include <algorithm>
#include <iterator>
#include <vector>
#include <string>
using namespace std;
int main()
{
	int x;
	cin>>x;
	if(x>0)
	{
		vector<string> s(x);
		vector<string> print;
		for(int i=0;i<x;i++)
		{
			string temp;
			cin>>temp;
			s.push_back(temp);
		}
			auto res=find(s.begin(), s.end(), "purple");
			if(res==end(s))
			{
				print.push_back("Power");
			}
			res=find(s.begin(), s.end(), "green");
			if(res==end(s))
			{
				print.push_back("Time");
			}
			res=find(s.begin(), s.end(), "blue");
			if(res==end(s))
			{
				print.push_back("Space");
			}
			res=find(s.begin(), s.end(), "orange");
			if(res==end(s))
			{
				print.push_back("Soul");
			}
			res=find(s.begin(), s.end(), "red");
			if(res==end(s))
			{
				print.push_back("Reality");
			}
			res=find(s.begin(), s.end(), "yellow");
			if(res==end(s))
			{
				print.push_back("Mind");
			}
			cout<<print.size()<<endl;
			for(string tp:print)
			{
				cout<<tp<<endl;
			}
	}else
	{
		cout<<"6"<<endl;
		cout<<"Time"<<endl;
		cout<<"Mind"<<endl;
		cout<<"Soul"<<endl;
		cout<<"Power"<<endl;
		cout<<"Reality"<<endl;
		cout<<"Space"<<endl;
	}
 
	return 0;
}