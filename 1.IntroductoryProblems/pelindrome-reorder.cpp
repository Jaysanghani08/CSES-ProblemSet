// link :
// soln :
#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

#define ll long long int
#define ld long double
#define all(a) (a).begin(), (a).end()
#define PI 3.1415926535897932384626433832795l
#define fr(i, s, e) for (long long int i = s; i <= e; ++i)
#define rfr(i, s, e) for (long long int i = s; i >= e; --i)
#define printyes cout << "YES\n"
#define printno cout << "NO\n"

template <typename T>
T gcd(T a, T b) { return (b ? __gcd(a, b) : a); }
template <typename T>
T lcm(T a, T b) { return (a * (b / gcd(a, b))); }
int occ[26];

void solve()
{
    // code here
    string x;
    cin >> x;

    fr(i, 0, x.length() - 1)
    {
        occ[x[i] - 'A']++;
    }

    int odds = 0;
    int oddi = -1;
    fr(i, 0, 25)
    {
        if (occ[i] % 2)
        {
            odds++;
            oddi = i;
        }
    }

    if (odds > 1)
    {
        cout << "NO SOLUTION" << endl;
        return;
    }

    // print left part
    fr(i, 0, 25)
    {
        if (occ[i] % 2 == 0)
        {
            int half = occ[i] / 2;
            occ[i] -= half;
            while (half--)
            {
                cout << (char)('A' + i);
            }
        }
    }

    // print mid
    if (oddi != -1)
    {
        while (occ[oddi]--)
        {
            cout << (char)('A' + oddi);
        }
    }

    // print right part
    for (int i = 25; i >= 0; i--)
    {
        while (occ[i] > 0)
        {
            occ[i]--;
            cout << (char)('A' + i);
        }
    }

    cout << endl;
}

void solve2()
{
    string s;
    cin >> s;

    map<char, int> mpp;
    for (auto x : s)
    {
        mpp[x]++;
    }

    int odd = 0;
    char oddchar = '#';
    int oddfreq = 0;
    for (auto it : mpp)
    {
        if (it.second % 2 == 1)
        {
            odd++;
            oddchar = it.first;
            oddfreq = it.second;
        }
    }

    if (odd > 1)
    {
        cout << "NO SOLUTION\n";
        return;
    }

    string ans;

    // left part
    for (auto it : mpp)
    {
        if (it.second % 2 == 0)
        {
            int half = it.second / 2;
            while (half--)
            {
                ans += it.first;
            }
        }
    }

    // middle
    if (oddchar != '#')
    {
        while (oddfreq--)
        {
            ans += oddchar;
        }
    }

    // right
    map<char, int>::reverse_iterator it;
    for (it = mpp.rbegin(); it != mpp.rend(); it++)
    {
        if (it->second % 2 == 0)
        {
            int half = it->second / 2;
            while (half--)
            {
                ans += it->first;
            }
        }
    }

    cout << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // int t;
    // cin >> t;
    // while(t--){
    solve2();
    // }
    return 0;
}
