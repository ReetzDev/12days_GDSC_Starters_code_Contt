//https://www.codechef.com/problems/SST
#include <iostream>

using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	int A,B;
	for(int i=1; i<=T; i++)
	{
	    cin>>A>>B;
	    int a = 10*A;
	    int b = 5*B;
	    
	    
	    if(a==b)
	    {
	        cout<<"ANY"<<endl;
	    }
	    else if(a>b)
	    {
	        cout<<"FIRST"<<endl;
	    }
	    else if(b>a)
	    {
	        cout<<"SECOND"<<endl;
	    }
	    
	}
	return 0;
}
