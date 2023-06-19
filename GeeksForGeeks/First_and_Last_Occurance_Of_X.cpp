
int fo(int a[],int n,int k)
{
    int l=0,r=n-1,mid=0,ans=-1;
    
    while(l<=r) {
        mid = l+(r-l)/2;
        if(a[mid]==k) {
            ans= mid;
            r=mid-1;
        }
        else if(a[mid] < k ) l = mid+1;
        else if(a[mid]>k) r = mid-1;
}
    return ans;
}
int lo(int a[],int n,int k)
{
    int l=0,r=n-1,mid=0,ans=-1;
    while(l<=r) {
        mid = l+(r-l)/2;
        if(a[mid]==k) {
            ans=mid;
            l = mid+1;
        }
        else if(a[mid] < k) l = mid+1;
        else if(a[mid] >k) {
            r= mid-1;
        }
    }
    return ans;
}

vector<int> find(int a[], int n , int k )
{
    vector<int> v;
    int f = fo(a,n,k);
    v.push_back(f);
    int l = lo(a,n,k);
    v.push_back(l);
    return v;
    
}
