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
    int n,x;
    cin >> n >> x;

    vi price(n);
    inv(price);

    vi pages(n);
    inv(pages);

    vvi dp(n, vi(x+1, 0));

    fr(i, price[0], x){
        dp[0][i] = pages[0];
    }

    fr(i, 1, n-1){
        fr(j, 0, x){
            
            int nottake = dp[i-1][j];

            int take = INT_MIN;
            if(j >= price[i]){
                take = pages[i] + dp[i-1][j-price[i]];
            }

            dp[i][j] = max(take, nottake);
        }
    }

    cout << (dp[n-1][x]) << endl; 
}
 
 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

        solve();
    return 0;
}