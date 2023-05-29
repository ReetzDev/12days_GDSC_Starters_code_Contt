//https://www.codechef.com/problems/FRGAME
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	// if n=s --> n win
	int T;
	int a,b,c,d;
	cin>>T;
	while(T--)
	{
	    cin>>a>>b>>c>>d; //nitin a coins .. sobha b coins .. c to nw .. then d to nw
	    if(a>=b)
	    {
	        b=b+c;
	    }
	    else //(b>a)
	    {
	        a=a+c;
	        
	    }
	    
	    
	    if(a>=b)
	    {
	        b=b+d;
	    }
	    else //(b>a)
	    {
	        a=a+d;
	    }
	    
	    
	    if(a>=b)
	    {
	        cout<<"N"<<endl;
	    }
	    else if(b>a)
	    {
	        cout<<"S"<<endl;
	    }
	    
	}
	return 0;
}
