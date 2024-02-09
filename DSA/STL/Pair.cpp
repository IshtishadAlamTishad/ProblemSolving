#include<bits/stdc++.h>
using namespace std;

int main()
{
	pair<string,vector<int>> p;

	p.first = "TISHAD";

	p.second = {1,2,3};

	cout << p.first << ' ';

	for(auto i:p.second) {
		cout << i << " ";
	}
	cout << '\n';


	pair<int,int> p1;
//	p1 = make_pair(1,2);
	p1= {1,2};
	p1.first++;
	cout << p1.first << " " << p1.second << '\n';

	cout << '\n';

	// make_pair() or {a,b}  where a&b is different or same datatype


	pair<string,vector<int>> p2;

	p2 = {"Tishad",{1,2,3,4}};
	cout << p2.first << " " << p2.second.size() << '\n';

	cout << '\n';
  
	pair<int,int> pt0;
	pair<int,int> pt1;

	pt0 = {1,2};
	pt1 = {3,4};

	if(pt0 < pt1) {
		cout << "yes\n";
	} else {
		cout << "NO\n";
	}
	cout << '\n';

	pair<int,int> p0 = min(pt0,pt1);
	cout << "Min pair : ";
	cout << p0.first << " " << p1.second << '\n';


	pair<int,int> pm = max(pt0,pt1);
	cout << "Max pair : ";
	cout << pm.first << " " << pm.second << '\n';


}
