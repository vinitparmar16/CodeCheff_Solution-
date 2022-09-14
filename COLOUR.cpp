

#include<bits/stdc++.h>
#define int long long
using namespace std;
int a[3],s;
void solve() {
   s=0;
   cin >> a[0] >> a[1] >> a[2];
   for(int i=0;i<3;++i)
      if(a[i]!=0) {
         a[i]--;
         s++;
      }
   for(int i=0;i<3;++i)
      for(int j=i+1;j<3;++j)
         if(a[i]>a[j]) swap(a[i],a[j]);
   if(a[0]>=2) {
      cout << s+3 << endl;
      return;
   }
   if(a[0]==1) {
      cout << (a[2]>=2?s+2:s+1) << endl;
      return;
   }
   cout << (a[1]==0?s:s+1) << endl;
}
signed main() {
   int T;
   cin >> T;
   while(T--) solve();
}