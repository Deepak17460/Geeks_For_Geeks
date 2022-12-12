
#define ll long long

ll Helper(vector<ll>&a){
    ll res=1,size=1;
    for(int i=1;i<a.size();i++){
        if(a[i-1]==a[i]){
            size++;
        }
        else{
            size=1;
        }
        res=max(res,size);
    }
    return size;
}

int main() {
    ll n;cin>>n;
    vector<ll>arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    int ans=0;
    for(int i:arr){
        ans=__gcd(ans,i);
    }
    cout<<ans<<endl;
    cout<<Helper(arr)<<endl;
}
