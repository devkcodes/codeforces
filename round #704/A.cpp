#include <iostream>
using namespace std;

int main() {
int t;
cin>>t;
while(t--)
{ long long a,b,c,p,res;
cin>>p>>a>>b>>c;

if(p%a==0||p%b==0||p%c==0)
{
	cout<<0<<endl;
	continue;
}
	long long x = a - p%a;
	long long y = b - p%b;
	long long z = c - p%c;

	res = min(min(x,y),z);
	cout<<res<<endl;
	
}
return 0;
}