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

// dp[i][j] = true if it is possible to make a sum of j with i coins and dp[i][j] = false if it is impossible to make a sum of j with i coins. Iterate through all the coins i and possible sums j:

// If dp[i – 1][j] = true, then dp[i][j] = true because if it is possible to make a sum of j with (i-1) coins, then we can make the same sum with i coins as well.
// Else if dp[i – 1][j – coins[i]] = true, then dp[i][j] = true because if it is possible to make a sum of (j – coins[i]) with i – 1 coins, then we can make sum j by using the ith coin.

void solve()
{
    int n;
    cin >> n;

    vi coins(n);
    inv(coins);

    ll sum = accumulate(all(coins), 0ll);

    vvi dp(n+1, vi(sum+1, 0));
    dp[0][0] = true;

    fr(i, 1, n){
        fr(j, 0, sum){
            dp[i][j] = dp[i-1][j];

            if(j >= coins[i-1] && dp[i-1][j - coins[i-1]]){
                dp[i][j] = true;
            }
        }
    }

    vi tmp;
    int cnt=0;
    fr(i,1,sum){
        if(dp[n][i]) tmp.pb(i);
    }

    cout << tmp.size() << endl;
    for(auto it : tmp){
        cout << it << " ";
    }
    cout << endl;
}
 
 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
        solve();
    return 0;
}