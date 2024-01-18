// link :
// soln :
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<vi> vvi;
typedef pair<ll, ll> pll;
typedef pair<int, int> pii;
typedef map<int, int> mii;
typedef set<int> si;
#define ld long double
#define all(a) (a).begin(), (a).end()
#define PI 3.1415926535897932384626433832795l
#define fr(i, s, e) for (int i = s; i <= e; ++i)
#define rfr(i, s, e) for (int i = s; i >= e; --i)
#define trav(item, x) for (auto &item : x)
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

void solve()
{
    int n;
    int target;

    cin >> n >> target;

    vector<pii> v(n); // {ele, ind}
    fr(i, 0, n - 1)
    {
        cin >> v[i].first;
        v[i].second = i+1;
    }

    sort(all(v));

    fr(i, 0, n - 1)
    {
        int rem = target - v[i].first;

        int left = 0, right = n - 1;

        while (left < right)
        {
            int tmp = v[left].first + v[right].first;

            // check if i,left,right are not equal
            if (i != left and i != right && tmp == rem)
            {
                cout << v[i].second << " " << v[left].second << " " << v[right].second<< endl;
                return;
            }
            else if (tmp < rem)
                left++;
            else
                right--;
        }
    }

    cout << "IMPOSSIBLE\n";
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}