//link : 
//soln : 
#include<bits/stdc++.h>
using namespace std;
 
#define ll long long int
#define ld long double
#define all(a) (a).begin(), (a).end()
#define PI 3.1415926535897932384626433832795l
#define fr(i,s,e) for(long long int i = s; i<=e; ++i)
#define rfr(i,s,e) for(long long int i = s; i>=e; --i)
#define printyes cout <<"YES\n"
#define printno cout <<"NO\n"
 
template<typename T> T gcd(T a, T b){return(b?__gcd(a,b):a);}
template<typename T> T lcm(T a, T b){return(a*(b/gcd(a,b)));}

void solve1()
{
    int n;
    cin >> n;

    fr(i, 0, (1<<n)-1){

        // mapping of decimal to binary
        // gray code at i'th position in gracode : (i) xor (1 right shift of i)
        int val = i ^ (i>>1);

        bitset<32> bs(val);

        cout << bs.to_string().substr(32-n) << endl;
    }

}
 
 
int main()
{
    solve1();
    return 0;
}