//https://www.codechef.com/problems/CANDY123
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,c=0;
	cin>>t;
	while(t--)
	{
	    c=0;
	    int A,B;
	    cin>>A>>B;
	    int i=1;
	    while(A>=0 && B>=0)
	    {
	        if(i%2 ==1)
	        {
	            A-=i;
	        }
	        else
	        {
	            B-=i;
	        }
	       
	       i++;
	    }
	    if(A<0)
	    {
	        cout<<"Bob\n";
	    }
	        
	    if(B<0)
	    {
	        cout<<"Limak\n";
	    }
	}
	return 0;
}
