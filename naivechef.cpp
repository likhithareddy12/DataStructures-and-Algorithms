#include <iostream>
using namespace std;
float ar[100000];
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    float n,a,b;
	    float win;
	    float ca=0,cb=0;
	    cin>>n>>a>>b;
	    for(int i=0;i<n;i++)
	    {
	        cin>>ar[i];
	    }
	    for(int i=0;i<n;i++)
	    {
	        if(ar[i]==a)
	        {
	            ca++;
	        }
	    }
	    for(int i=0;i<n;i++)
	    {
	        if(ar[i]==b)
	        {
	            cb++;
	        }
	    }
	    win=(ca*cb)/(n*n);
	    cout<<win<<endl;
	}
	return 0;
}
