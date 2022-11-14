#include<iostream>
#include<limits.h>
using namespace std;
int main()
{
    int a;
    
    while(1)
    {
        
        cout<<"enter a number "<<endl;
        cin>>a;
        if(cin.fail())
        {
            cout<<"wrong input ,enter again ";
            cin.clear();
            cin.ignore(100,'\n');
        }
        else
        {
            break;
        }
    }
}
        
    /*int b;
    cout<<"enter a number "<<endl;
    cin>>b;
    if(cin.fail())
    {
        cout<<"wrong input";
    }*/

    
            

   

