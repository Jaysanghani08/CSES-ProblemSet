//link : 
//soln : https://www.youtube.com/watch?v=OtZ81ydc3WA&ab_channel=MiketheCoder
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

void solve()
{
    //code here
    ll n;
    cin>>n;
    ll sum = n*(n+1)/2ll;
    if(sum%2 == 1){
        cout << "NO\n";
        return;
    }
    
    cout<<"YES\n";
    sum/=2;
    vector<ll> v1,v2;

    if(n%2==0){
        // cout <<"even\n";
        fr(i,0,n/2-1){
            if(i%2==0){
                v1.push_back(i+1ll);
                v1.push_back(n-i);
            }
            else{
                v2.push_back(i+1ll);
                v2.push_back(n-i);
            }
        }
    }
    else{
        fr(i,0,(n-1)/2-1){
            if(i%2==0){
                v1.push_back(i+1ll);
                v1.push_back(n-i-1);
            }
            else{
                v2.push_back(i+1ll);
                v2.push_back(n-i-1);
            }
        }

        if(v1.size() > v2.size()){
            v2.push_back(n);
        }
        else{
            v1.push_back(n);
        }
    }

    cout << v1.size() <<endl;
    fr(i,0,v1.size()-1){
        cout << v1[i] << " ";
    }
    
    cout << endl << v2.size() << endl;
    fr(i,0,v2.size()-1){
        cout << v2[i] << " ";
    }
    cout <<endl;


}
 
 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // int t;
    // cin >> t;
    // while(t--){
        solve();
    // }
    return 0;
}