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

int memo(int n, vector<int> &dp)
{

    if(n == 0) return 1;
    if(dp[n] != -1) return dp[n];

    int ans = 0;
    for(int i=1; i<=6; ++i){
        if(n - i >= 0) ans = (ans + memo(n - i, dp)%mod)%mod;
    }
    
    return dp[n] = ans;
}
 
 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n;
    cin >> n;

    vector<int> dp(n+1, -1);
    cout << memo(n, dp) << endl;
    return 0;
}