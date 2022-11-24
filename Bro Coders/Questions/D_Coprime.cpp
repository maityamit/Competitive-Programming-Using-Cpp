#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int, int> p32;
typedef pair<ll, ll> p64;
typedef pair<double, double> pdd;
typedef vector<ll> v64;
typedef vector<int> v32;
typedef vector<vector<int>> vv32;
typedef vector<vector<ll>> vv64;
typedef vector<vector<p64>> vvp64;
typedef vector<p64> vp64;
typedef vector<p32> vp32;
ll MOD = 998244353;
double eps = 1e-12;
#define forn(i, e) for (ll i = 0; i < e; i++)
#define forsn(i, s, e) for (ll i = s; i < e; i++)
#define rforn(i, s) for (ll i = s; i >= 0; i--)
#define rforsn(i, s, e) for (ll i = s; i >= e; i--)
#define ln "\n"
#define haa cout << "YES"
#define naa cout << "NO"
#define ha cout << "Yes"
#define na cout << "No"
#define dbg(x) cout << #x << " = " << x << ln
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define INF 2e18
#define fast_cin()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())

void solve()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        vector<int> arr(1001,-1);
        for (int i = 0; i < n; i++){
            int temp;
            cin>>temp;
            arr[temp]=i+1;
        }

        int maxi = -1;
        for(int i=1;i<=1000;i++){
            if(arr[i]==-1) continue;
            for(int j=1;j<=1000;j++){
                if(arr[j]==-1) continue;
                if(__gcd(i,j)==1) maxi=max(maxi,arr[i]+arr[j]);
            }
        }

        cout<<maxi<<endl;
        



    }
}
int main()
{
    solve();
    return 0;
}