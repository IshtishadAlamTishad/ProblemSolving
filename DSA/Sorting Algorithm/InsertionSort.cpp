void insertionSort(int a[], int n)
{
    for(int i=1;i<=n-1;++i) {
    	int current = a[i];
    	int prev = i-1;
    	while(prev>=0 and a[prev]>current) {
    		a[prev+1] = a[prev];
    		prev -= 1;
    	}
    	a[prev+1] = current;
    }
}
