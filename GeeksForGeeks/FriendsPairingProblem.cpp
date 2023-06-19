#include <bits/stdc++.h> 
using namespace std; 

class Solution
{
public:
 const int m = 1e9+7;
    int countFriendsPairings(int n) {
    long long a = 1, b = 2, c = 0; 
    	if (n <= 2) { 
    		return n; 
    	} 
    	for (int i=3;i<=n;++i)
    	{
    		c = ( b%m + ( ( (i - 1)%m  *  a%m )%m ) %m )%m ; 
    		a = b; 
    		b = c; 
    	} 
    	return c; 
    }
};    
int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
    	int n;
    	cin>>n;
    	Solution ob;
    	cout <<ob.countFriendsPairings(n); 
    	cout<<'\n';
    }
} 
