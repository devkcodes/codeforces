#include <iostream>
#include<algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
       int n;
       cin>>n;
       int x[n];
       int y[n];
       for(int i=0;i<n;i++)
       {
           cin>>x[i];
           cin>>y[i];
       }
       
       sort(x,x+n);
       sort(y,y+n);
       
       int xtotal=0,ytotal=0;
       
       if(n%2!=0)
       {
           xtotal=1;
           ytotal=1;
       }
       else 
       {
           xtotal=x[(n+1)/2]-x[(n+2)/2]+1;
           ytotal=x[(n+1)/2]-x[(n+2)/2]+1;
           
       }
       cout<<xtotal*ytotal<<endl;
    }
    return 0;
}