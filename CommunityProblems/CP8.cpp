//https://www.codechef.com/problems/KEPLERSLAW
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	//T*T=k*(r1+r2)^3
	int T;
	cin>>T;
	while(T--)
	{
	    double t1,t2,r1,r2;
	    cin>>t1>>t2>>r1>>r2;
	    if(((t1*t1)/(r1*r1*r1))==((t2*t2)/(r2*r2*r2)))
	    {
	        cout<<"Yes"<<endl;
	    }
	    else
	    {
	        cout<<"No"<<endl;
	    }
	}
	return 0;
}
