#include <bits/stdc++.h>
using namespace std;
#define oo 1000000001
int dp1[2][1005];
vector<int>s1;
vector<int>s2;
int n,m;
int ans = -oo;
int main(){
    cin>>n>>m;
    int from = 0, to =1;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        s1.push_back(temp);
    }
    for(int i =0 ;i<m;i++){
        int temp;
        cin>>temp;
        s2.push_back(temp);
        dp1[0][i] = 0;
        dp1[1][i] = 0;
    }
    dp1[0][m] = 0;
    dp1[1][m] = 0;
    for(int i = 1;i<=n;i++){
        for(int o=1;o<=m;o++){
            dp1[to][o] = s1[i-1]*s2[o-1]+max(0,dp1[from][o-1]);
            ans  = max(ans,dp1[to][o]);
            //cout<<dp1[to][o]<<endl<<dp1[from][o-1]<<endl;
            
        }
        swap(from, to);
    }
    reverse(s1.begin(), s1.end());
        for(int o = 0;o<=m;o++){
            dp1[0][o] = 0;
            dp1[1][o] = 0;
        }
    from = 0;
    to = 1;
    for(int i = 1;i<=n;i++){
        for(int o=1;o<=m;o++){
            dp1[to][o] = s1[i-1]*s2[o-1]+max(0,dp1[from][o-1]);
            ans  = max(ans,dp1[to][o]);
        }
        swap(from, to);
    }
    cout<<ans<<endl;
}


