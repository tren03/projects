#include <iostream>
#include <string>
using namespace std;
class E
{
    public:
    string name,usn;
    float basic,da,it,net;
    void read()
    {
        cout<<"enter name and usn"<<endl;
        cin>>name>>usn;
        cout<<"enter basic"<<endl;
        cin>>basic;
        da=basic*0.52;
        it=(basic+da)*0.3;
        net=(basic+da)-it;
        
    }
    void disp()
    {
        cout<<"name "<<name<<endl<<"usn "<<usn<<endl;
        cout<<"net "<<net<<endl<<"basic "<<basic<<endl<<"da "<<da<<endl<<"it "<<it<<endl;
    }
};
int main()
{
    int n;
    cout<<"enter nos of emp "<<endl;
    cin>>n;
    E e[n];
    for(int i=0;i<n;i++)
    {
        cout<<"enter emp"<<i+1<<"details "<<endl;
        e[i].read();
    }
    for(int i=0;i<n;i++)
    {
        cout<<"DISPLAYING EMP "<<i+1<<"DETAILS "<<endl;
        e[i].disp();
    }
    
    


    
}