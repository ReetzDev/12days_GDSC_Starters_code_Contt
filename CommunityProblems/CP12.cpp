//https://www.codechef.com/problems/MATCHES
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int matches[10]={6,2,5,5,4,5,6,3,7,6};
	int T;
	int A,B,number,digit;
	cin>>T;
	while(T--)
	{
	    int count =0;
	    cin>>A>>B;
	    number=A+B;
	    while(number>0)
	    {
	        digit=number%10;
	        count = count + matches[digit];
	        number=number/10;
	    }
	    cout<<count<<endl;
	}
	return 0;
}
