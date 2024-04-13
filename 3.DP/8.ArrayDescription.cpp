#include<bits/stdc++.h>
using namespace std;
 
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<vi > vvi;
typedef pair<int,int> pii;
#define all(a) (a).begin(), (a).end()
#define fr(i,s,e) for(int i = s; i<=e; ++i)
#define rfr(i,s,e) for(int i = s; i>=e; --i)
#define pb push_back
#define mp make_pair
// clang-format off
#define inv(v) for(auto &i:v){cin>>i;}
#define endl "\n"
#define yesprint cout<<"YES\n";
#define noprint cout<<"NO\n";
#define printv(v) for(auto i:v){cout<<i<<" ";}cout<<"\n";
// clang-format on

int mod = 1e9+7;

void solve()
{
    int n, m;
    cin >> n >> m;

    vi a(n);
    inv(a);

    vvi dp(n, vi(m+1, 0));
    // dp[i][k] = no. of ways to make a prefix of size i s.t. last element of prefix if k

    fr(i,1,m){
        if(a[0] == 0 || a[0] == i)
            dp[0][i] = 1;
    }

    fr(i, 1, n-1){
        fr(k, 1, m){
            if(a[i] != 0 && a[i] != k){
                dp[i][k] = 0;
                continue;
            }   

            for(int prev = k-1; prev <= k+1; ++prev){
                if(prev >= 1 && prev <= m){
                    dp[i][k] = (dp[i][k] + dp[i-1][prev])%mod;
                }
            }
        }
    }

    fr(i,0,n-1){
        fr(j,1,m){
            cout << dp[i][j] << " ";
        }

        cout << endl;
    }

    int sum = 0;
    fr(i,1,m){
        sum = (sum + dp[n-1][i]) % mod;
    }

    cout << sum << endl;
}
 
 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

        solve();
    return 0;
}