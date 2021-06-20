#include <iostream>

using namespace std;
int armonie (int x,int y)
{
    int s1,s2,a,b,d;
    s1=0,s2=0;
    for(d=1 ; d<=x ; d++)
        if(x%d==0)
        s1=s1+d;
    for(d=1 ; d<=y ;d++)
        if(y%d==0)
        s2=s2+d;
     if(s1<s2)
     {
         a=s1;
         b=s2;
     }
     else
     {
         a=s2;
         b=s1;
     }
     if(x+y>a && x+y<b)
        return 1;
     else
        return 0;
}
int main()
{
    cout <<armonie(8,13);
    return 0;
}
