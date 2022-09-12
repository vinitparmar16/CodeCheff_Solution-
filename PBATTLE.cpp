#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,t,q;
vector<int> discrete(vector<int> Q) {
vector<int> a=Q;
 sort(a.begin(),a.end());
  a.erase(unique(a.begin(),a.end()),a.end());
 for (int i=0;i<(int)Q.size();++i)
 Q[i]=lower_bound(a.begin(),a.end(),Q[i])-a.begin();
 return Q;
}
void solve() {
 vector<int> a,b,c,s,p,r;
 cin >> n;t=0;q=0;
 for(int i=1,x;i<=n;++i){cin >> x;a.push_back(x);}
 for(int i=1,x;i<=n;++i){cin >> x;b.push_back(x);}
 a=discrete(a);b=discrete(b);
 c.resize(n);s.resize(n);r.resize(n);
 for(int i=0;i<n;++i){c[a[i]]=b[i];s[i]=a[i]+b[i];r[b[i]]=i;}
 for(int i=0;i<n;++i) {
    p.insert(upper_bound(p.begin(),p.end(),c[i]),c[i]);
    s[r[c[i]]]-=lower_bound(p.begin(),p.end(),c[i])-p.begin();
 }
 for(int i:s) t=max(t,i);for(int i:s) q+=(i==t);
 cout << q << endl;
 return;
 cout << " " << endl;
}
signed main() {
 int T;cin >> T;
 while(T--) solve();
}