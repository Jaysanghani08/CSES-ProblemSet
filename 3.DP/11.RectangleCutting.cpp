#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<vi> vvi;
typedef pair<int, int> pii;
#define all(a) (a).begin(), (a).end()
#define fr(i, s, e) for (int i = s; i <= e; ++i)
#define rfr(i, s, e) for (int i = s; i >= e; --i)
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
    int a, b;
    cin >> a >> b;

    vvi dp(a + 1, vi(b + 1, 1e9));

    fr(i, 1, a)
    {
        fr(j, 1, b)
        {
            if (i == j)
            {
                dp[i][j] = 0;
                continue;
            }

            // vertcle cuts
            fr(v, 1, j - 1)
            {
                dp[i][j] = min(dp[i][j], 1 + dp[i][v] + dp[i][j - v]);
            }

            // horizontal
            fr(h, 1, i - 1)
            {
                dp[i][j] = min(dp[i][j], 1 + dp[h][j] + dp[i - h][j]);
            }
        }
    }

    cout << dp[a][b] << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();

    return 0;
}