#include<bits/stdc++.h>
using namespace std;

struct info
{
	double score;
	int age;
	string name;
};

bool cmp(const info &a,const info &b)
{
	if(a.score > b.score) return true;
	else if(a.score==b.score && a.age < b.age) return true;
	else if(a.score==b.score and a.age == b.age and a.name < b.name) return true; 
	return false;
}

int main()
{
	vector<info> v;
	int n;
	cin >> n;
	
	for(int i=0;i<n;++i) {
		double score1;
		int age1;
		string name1;
		cin >> score1 >> age1 >> name1;
		
		info a;
		a.score = score1;
		a.age = age1;
		a.name = name1;
		v.push_back(a);
	}
	
  cout << "Before Sorting : \n";
  for(auto u:v) {
	 	cout << u.score << " " << u.age << " " << u.name << '\n';
	 }
	
	sort(v.begin(),v.end(),cmp);
	
	cout << "\nAfter sorting :\n\n";
	for(auto x:v) {
		cout << x.score << " " << x.age << " " << x.name << '\n';
	}
}
