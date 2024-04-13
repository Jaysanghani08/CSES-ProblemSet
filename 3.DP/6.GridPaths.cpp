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

ll mod = 1e9 + 7;
ll dp[1002][1002];

void solve()
{
    int n;
    cin >> n;

    char a[n][n];

    fr(i,0,n-1){
        fr(j,0,n-1){
            cin >> a[i][j];
        }
    }

    if(a[0][0] == '*') {
        cout << 0 << endl;
        return;
    }

    fr(i,0,1001){
        fr(j,0,1001){
            dp[i][j] = 0;
        }
    }


    fr(i,0,n-1) {
        if(a[0][i] == '*') break;
        else dp[0][i] = 1;
    }
    fr(i,0,n-1) {
        if(a[i][0] == '*') break;
        else dp[i][0] = 1;
    }

    fr(i,1,n-1){
        fr(j,1,n-1){
            if(a[i][j] == '*') dp[i][j] = 0;
            else{
                dp[i][j] = (dp[i-1][j] + dp[i][j-1])%mod;
            }
        }
    }

    // fr(i,0,n-1){
    //     fr(j,0,n-1){
    //         cout << dp[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    print(dp[n-1][n-1]);
}
 
 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
        solve();
    return 0;
}