void selectionsort(int a[],int n)
{
    for(int i=0;i<=n-2;++i) {
        int curr = a[i];
        int min_pos = i;
        for(int j=i;j<n;++j) {
            if(a[j] < a[min_pos]) {
                min_pos = j;
            }
        }
        swap(a[min_pos],a[i]);
    }
}

// Time Complexity : O(N*N)
