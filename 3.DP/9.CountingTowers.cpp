//link : 
//soln : 
#include<bits/stdc++.h>
using namespace std;
 
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<vi > vvi;
typedef pair<ll,ll> pll;
typedef pair<int,int> pii;
typedef map<int,int> mii;
typedef set<int> si;
#define ld long double
#define all(a) (a).begin(), (a).end()
#define PI 3.1415926535897932384626433832795l
#define fr(i,s,e) for(int i = s; i<=e; ++i)
#define rfr(i,s,e) for(int i = s; i>=e; --i)
#define trav(item, x) for(auto& item:x)
#define pb push_back
#define mp make_pair
#define sz(x) (int)(x).size()
// clang-format off
#define inv(v) for(auto &i:v){cin>>i;}
#define endl "\n"
#define printy cout<<"YES\n";
#define printn cout<<"NO\n";
#define print(var) cout<<var<<"\n";
#define printv(v) for(auto i:v){cout<<i<<" ";}cout<<"\n";
// clang-format on

int mod = 1e9+7;

vvi dp(1e6+1, vi(2, 0));

void solve()
{
    int n;
    cin >> n;

    dp[n][0] = 1;
    dp[n][1] = 1;

    rfr(i, n-1, 0){
        dp[i][0] = ( (2ll*dp[i+1][0]) + dp[i+1][1] ) % mod;
        dp[i][1] = ( (4ll*dp[i+1][1]) + dp[i+1][0] ) % mod;
    }

    // fr(i,0,n) cout << "(" << dp[i][0] << ',' << dp[i][1] << ")" << " ";
    // cout << endl;

    cout << ( dp[1][0] + dp[1][1] ) % mod << endl;
}
 
 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}