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

ll memo(ll target, vll &dp, vll &v){
    int n = v.size();
    if(target == 0) return 0;

    if(dp[target] != -1) return dp[target];

    ll mini = INT_MAX;
    fr(i,0,n-1){
        if(v[i] <= target){
            ll tmp = 1 + memo(target-v[i], dp, v);
            mini = min(mini, tmp);
        }
    }

    return dp[target] = mini;
}

void solve()
{
    ll n, x;
    cin >> n >> x;

    vll v(n);
    inv(v);

    vll dp(x+1, -1); // dp[i] == min coins required to make sum = i
    ll ans = memo(x, dp, v);

    if(ans == INT_MAX){
        print(-1);
    }
    else print(ans);
}
 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // int t;
    // cin >> t;
    // while(t--){
        solve();
    // }
    return 0;
}