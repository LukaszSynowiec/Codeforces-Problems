#include <iostream>

using namespace std;
int CountUniqueCharacters(string str){
    int count = 0;

    for (int i = 0; i < str.length  (); i++){
         bool appears = false;
         for (int j = 0; j < i; j++){
              if (str[j] == str[i]){
                  appears = true;
                  break;
              }
         }

         if (!appears){
             count++;
         }
    }

    return count;
}
int main()
{
    string x;


    cin>>x;
    int coun=CountUniqueCharacters(x);
    if(coun%2==0)
    {
        cout<<"CHAT WITH HER!";
    }else
     {
        cout<<"IGNORE HIM!";
    }

    return 0;
}
