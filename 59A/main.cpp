#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string s;
    int l=0;
    int u=0;
    cin>>s;
    for(int i=0;i<s.length();i++)
    {
        if(isupper(s[i]))
            u++;
        else
            l++;
    }
    if(l==u||l>u)
    {
       std::transform(s.begin(), s.end(),s.begin(), ::tolower);
    }
    else
    {
         std::transform(s.begin(), s.end(),s.begin(), ::toupper);
    }
    cout<<s;
    return 0;
}
