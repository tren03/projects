#include <ctime>

#include <iostream>
using namespace std;
void t()
{   
    time_t t= time(0);
    char *ch = ctime(&t);
    cout<<ch;
}