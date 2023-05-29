//https://www.codechef.com/problems/LUCKYFR
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T,number,digit;
	string a;
	cin>>T;
	while(T--)
	{
	    int count=0;
	    cin>>a;
	    for(int i=0;i<a.size();i++)
	    {
	        if(a[i]=='4')
	        {
	            count++;
	        }
	    }
	    cout<<count<<endl;
	}
	return 0;
}
