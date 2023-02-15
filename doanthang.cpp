#include <bits/stdc++.h>
using namespace std;
int64_t ans=0,c=1;
typedef pair<int64_t,bool> pib;
int main() {
        int64_t n;
        cin>>n;
        vector<pib> x(n*2);
        for(int64_t i=0;i<n;i++){
            int64_t a,b;
            cin>>a>>b;
            x[2*i]={a,0};
            x[2*i+1]={b,1};
        }
        sort(x.begin(),x.end());
        for(int64_t i=1;i<2*n;++i){
            if(c) ans+=x[i].first-x[i-1].first;
            if(x[i].second) --c;else ++c;
        }
        cout<<ans;
    return 0;
}
