//https://www.codechef.com/problems/BURGERS
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T,A,B;
	
	cin>>T;
	for( int i=1;i<=T;i++)
	{
	    cin>>A>>B;
	    if(A<=B)
	    {
	    cout<<A;
	    }
	    else if(A>B)
	    {
	        cout<<B;
	    }
	    cout<<endl;
	    
	 }
	 return 0;
}
