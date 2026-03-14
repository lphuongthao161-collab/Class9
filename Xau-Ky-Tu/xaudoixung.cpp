#include <bits/stdc++.h>
using namespace std;

string s;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    freopen("XAUDX.INP","r",stdin);
    freopen("XAUDX.OUT","w",stdout);


    cin>>s;
    int l=0;
    int r=s.size()-1;
    while(l<=r){
        if(s[l]!=s[r]){
            cout<<"NO";
            return 0;
        }
        else{
            l++;
            r--;
        }
    }
    cout<<"YES";



    return 0;
}
