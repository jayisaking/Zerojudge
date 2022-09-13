#include <bits/stdc++.h>
using namespace std;
vector<int>steps;
int getSteps(int step1){
    int start = lower_bound(steps.begin(), steps.end(), step1) - steps.begin();
    if(steps[start]==step1){
        return start;
    }
    return getSteps(step1-steps[start-1]);
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    steps.push_back(0);
    steps.push_back(1);
    for(int i=2;i<=31;i++){
        steps.push_back(((steps[steps.size()-1]-1)*2+1)+1);
//        cout<<*(steps.end()-1)<<" "<<i<<endl;
    }
    int n;
    cin>>n;
    for(int i = 1;i<=n;i++){
        int a,b;
        cin>>a>>b;
        cout<<getSteps(b)<<endl;
    }
}


