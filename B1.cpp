#include <iostream>
using namespace std;
int main()
{
    
    int array[2][2] = {{53947,56211},{19385,43159}};
    for(int i=0;i<2;i++){
        int c=0,c1=1,d=1,d1=0,p=array[i][0],p1=array[i][1],q,d2;
        while(r!=0)
        {
            q=p1/p;
            d2=p;
            p=p1-(q*p);
            p1 = d2;
            d2=c;
            c = c1-(q*c);
            c = d2;
            d1 = d;
            t=d1-(q*d);
            d1=d2;
        }
        if(d1<0)
        {
            d1+=array[i][1];
        }
        cout<<"Multiplicative inverse of "<<array[i][0]<<"^-1mod"<<array[i][1]<<" is "<<d1<<endl;
    }

    return 0;
}
