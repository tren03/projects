#include<iostream>
#include<math.h>
using namespace std;
class P
{
    public :
        float x,y;
    void set()
    {
        cout<<"enter x "<<endl;
        cin>>x;
        cout<<"enter y "<<endl;
        cin>>y;
    }


};
void min(P p[])
{
    float dist=0,min=1000,c;
    for(int i=1;i<3;i++)
    {
        dist = sqrt(pow((p[0].x-p[i].x),2)+pow((p[0].y-p[i].y),2));
        //dist=sqrt(pow(p[0].x - p[i], 2) + pow(p[0].y - p[i].y, 2));
        cout<<"distance between point 1 and "<<i+1<<" = "<<dist<<endl;
        if(dist<=min)
        {
            min=dist;
            c=i;

        }


    }
    cout<<"smallest distance from point 1 = point "<<c+1<<" with distance "<<min;

}
int main()
{
    P p[3];
    for(int i=0;i<3;i++)
    {
        cout<<"enter point "<<i+1<<endl;
        p[i].set();

    }
    min(p);




}



