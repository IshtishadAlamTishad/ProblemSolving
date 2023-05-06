void print_pair(int a[],int n)
{
 for(int i=0;i<n;++i) {
 	int x = a[i];
 	for(int j=i+1;j<n;++j) {
 		int y= a[j];
 		cout << x << ',' << y << '\n';
 	}
 	cout << '\n';
 }
}


/*

if a = 1,2,3,4

1,2
1,3
1,4

2,3
2,4

3,4

*/

