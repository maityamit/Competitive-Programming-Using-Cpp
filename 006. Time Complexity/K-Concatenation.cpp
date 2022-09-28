#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll kadanes(ll b[],ll n){
    ll maxSum=INT_MIN,curSum=0;
	for(ll i=0;i<n;i++){
	    curSum+=b[i];
	    maxSum=max(maxSum,curSum);
	    if(curSum<0) curSum=0;
	 }
	 return maxSum;
}
int main() {
	// your code goes here
	ll t;
	cin>>t;
	while(t--){
	    ll n,k;
	    cin>>n>>k;
	    ll a[n];
	    ll sum=0,res;
	    for(ll i=0;i<n;i++){
	        cin>>a[i];
	        sum+=a[i];
	    }
	    if(k==1){
	        res=kadanes(a,n);
	        cout<<res<<endl;
	        continue;
	    }
	    ll b[2*n];
	    for(ll i=0;i<n;i++){
	        b[i]=a[i];
	        b[i+n]=a[i];
	    }
	    res=kadanes(b,2*n);
	    if(sum>0){
	        res+=(sum*(k-2));
	    }
	    cout<<res<<endl;
	}
	return 0;
}
