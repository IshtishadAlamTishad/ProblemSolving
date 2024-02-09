/*
	Author : Tishad07
	creating pair by struct
*/

#include<bits/stdc++.h>
using namespace std;

template<typename x,typename y>

struct Pair {
	x first;
	y second;
};

int main()
{
	Pair<int,vector<int>> p;

	p.first = 1;
	p.second = {1,2,3};

	cout << p.first << " " << p.second.size() << '\n';

}
