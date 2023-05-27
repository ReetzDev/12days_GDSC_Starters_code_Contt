//https://www.codechef.com/problems/FEVER
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T,X;
	cin>>T;
	while(T--)
	{
	    cin>>X;
	    if(X>98)
	    {
	        cout<<"YES"<<endl;
	    }
	    else
	    {
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
