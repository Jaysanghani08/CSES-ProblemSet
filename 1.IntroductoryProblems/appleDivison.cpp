// link :
// soln :
#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double
#define all(a) (a).begin(), (a).end()
#define PI 3.1415926535897932384626433832795l
#define fr(i, s, e) for (long long int i = s; i <= e; ++i)
#define rfr(i, s, e) for (long long int i = s; i >= e; --i)
#define trav(item, x) for (auto &item : x)
#define pb push_back
#define mp make_pair
#define sz(x) (int)(x).size()
#define endl "\n"

void solve()
{
    // code here
    ll n;
    cin >> n;

    ll arr[n];
    ll total = 0;
    fr(i,0,n-1){
        cin >> arr[i];
        total += arr[i];
    }

    ll ans = INT_MAX;
    fr(i, 0, 1<<n){
        ll tmp = 0;
        fr(j,0,n){
            if(1<<j & i) tmp += arr[j];
        }

        ans = min(ans, abs(total-tmp-tmp));
    }

    cout << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();

    return 0;
}