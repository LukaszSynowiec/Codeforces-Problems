#include <iostream>

using namespace std;

int main()
{
    int x;
    cin>>x;
    char tab[x];
    for(int i=0;i<x;i++)
    {
        cin>>tab[i];
    }
    int count=0;
    for(int i=0;i<x;i++)
    {
        if(i+1<x)
        {
         if(tab[i]==tab[i+1])
         {
          count++;
         }
        }
    }
    cout<<count;
    return 0;
}
