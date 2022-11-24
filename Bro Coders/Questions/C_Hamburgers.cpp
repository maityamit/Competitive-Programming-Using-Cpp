///////////////////       AMIT MAITY               ///////////////////
///////////////////      Second Year (2025)       ////////////////////
///////////////////      Target: Good Programmer   ///////////////////
///////////////////     How: Practice, Practice & Practice ///////////


#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int,int> p32;
typedef pair<ll,ll> p64;
typedef pair<double,double> pdd;
typedef vector<ll> v64;
typedef vector<int> v32;
typedef vector<vector<int> > vv32;
typedef vector<vector<ll> > vv64;
typedef vector<vector<p64> > vvp64;
typedef vector<p64> vp64;
typedef vector<p32> vp32;
ll MOD = 998244353;
double eps = 1e-12;
#define forn(i,e) for(ll i = 0; i < e; i++)
#define forsn(i,s,e) for(ll i = s; i < e; i++)
#define rforn(i,s) for(ll i = s; i >= 0; i--)
#define rforsn(i,s,e) for(ll i = s; i >= e; i--)
#define ln "\n"
#define haa cout<<"YES"
#define naa cout<<"NO"
#define ha cout<<"Yes"
#define na cout<<"No"
#define dbg(x) cout<<#x<<" = "<<x<<ln
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define INF 2e18
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())
 

void solve(){

    string st;
    cin>>st;
    ll nb,ns,nc;
    ll pb,ps,pc;
    cin>>nb>>ns>>nc>>pb>>ps>>pc;;
    ll rub;
    cin>>rub;

   ll b=0,s=0,c=0;
   for(auto it:st){
       if(it=='S') s++;
       else if(it=='B') b++;
       else c++;
   }

    ll ans = 0;
    
    
    ll l=0;
    ll h=1e15;
    
    while(l<=h){
    	
    	ll mid = (l+h)/2;
    	
    	ll x = max(0ll,s*mid-ns);
    	ll y = max(0ll,b*mid-nb);
    	ll z = max(0ll,c*mid-nc);
    	ll cost = x*ps+y*pb+z*pc;
    	
    	if(cost>rub) h=mid-1;
    	else{
    		ans=mid;
    		l=mid+1;
		}
    	
	}
	
	cout<<ans<<endl;


}
int main()
{
 
solve();
 return 0;
}