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
    string s;
    cin >> s;
    int n = s.length();
    set<string> perms;

    sort(all(s));

    do{
        perms.insert(string(all(s)));
    }while(next_permutation(all(s)));

    cout << perms.size() << endl;
    for(auto &it : perms) {
        cout << it << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();
    return 0;
}