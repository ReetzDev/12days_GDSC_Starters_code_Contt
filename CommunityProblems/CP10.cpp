//https://www.codechef.com/problems/DOLL
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T,N,K;
	cin>>T;
	while(T--)
	{
	    cin>>N>>K; //N - number of players K- height ali gihun
	    int H[N];
	    int count =0;
	    for(int i =0; i<N; i++)
	    {
	        cin>>H[i];
	    }
	    for(int i=0;i<N;i++)
	    {
	        if(H[i]>K)
	        {
	            count++;
	        }
	    }
	    cout<<count<<endl;
	}
	return 0;
}
