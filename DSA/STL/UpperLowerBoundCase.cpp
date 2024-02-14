#include<bits/stdc++.h>
using namespace std;

int main()
{
	vector<int> v = {1,2,3,4,5,6,6,6,7,8,9};

	int n = v.size();
	int x = 6;

	int lo = lower_bound(v.begin(),v.end(),x) - v.begin();
	int up = upper_bound(v.begin(),v.end(),x) - v.begin();
	cout << "Lower bound : " << lo << '\n';
	cout << "upper bound : " << up << '\n';


	cout << "Number of occurance of " << x << " is : " << (up-lo+1) << '\n';
 	cout << "Numbers less than " << x << " is : " << lo << '\n';
  	cout << "Numbers less than or equal to " << x << " is : " << up << '\n';
  
	cout << "Numbers Greater than " << x << " is : " << n-up << '\n';
	cout << "Numbers Greater than or equal to " << x << " is : " << n-lo<< '\n';

	
}
