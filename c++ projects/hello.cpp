#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;
int main()
{
    string s;
    int c=0;
    cout<<"enter a string \n";
    cin>>s;
    sort(s.begin(),s.end(),greater<int>());
    for(int i=0;i<s.length();i++)
    {
        if(s[i]!=s[i+1])
        {
            cout<<"frequency of "<<s[i]<<" = "<<++c<<endl;
            c=0;
        }
        else
        {
            c++;
        }
    }
    cout<<s;
    

}
    