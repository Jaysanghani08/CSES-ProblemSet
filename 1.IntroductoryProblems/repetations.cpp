#include <iostream>
using namespace std;

int main(){

    string s;
    cin >> s;
    int mx = 0;
    int cnt = 1;
    for(int i=0; i<s.length(); i++){
        if(s[i] == s[i+1]){
            cnt++;
        }else{
            mx = max(mx,cnt);
            cnt=1;
        }
    }
    cout << max(mx, cnt);
    return 0;
}