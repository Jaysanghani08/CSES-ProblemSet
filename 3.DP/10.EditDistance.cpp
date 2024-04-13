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

void solve()
{
    string a,b;
    cin >> a >> b;

    int n = a.length(), m = b.size();

    vvi dp(n+1, vi(m+1, 0));

    fr(i,0,n){
        dp[i][0] = i;
    }

    fr(i,0,m){
        dp[0][i] = i;
    }

    fr(i,1,n){
        fr(j,1,m){
            if(a[i-1] == b[j-1]){
                dp[i][j] = dp[i-1][j-1];
            }
            else{
                dp[i][j] = 1 + min( dp[i-1][j], min( dp[i-1][j-1], dp[i][j-1] ));
            }
        }
    }


    cout << dp[n][m] << endl;
}
 
 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    solve();
    return 0;
}