#include<bits/stdc++.h>
#define int long long
using namespace std;
int n;
string s;
void solve() {
   cin >> n >> s;
   int f0=0,f1=0;
   for(char c:s) {
      f0+=(c=='0');
      f1+=(c=='1');
   }
   if(f0==0) {cout << n << ' ' << 0 << endl;return;}
   if(f1==0) {cout << n << ' ' << 0 << endl;return;}
   cout << 1 << ' ' << abs(f0-f1)+1 << endl;
   for(int i=0,Q=0;i<abs(f0-f1);++i) {
      string t;
      for(int j=0;j<(int)s.size()-1;++j)
         if((s[j]=='0'&&s[j+1]=='1')||(s[j]=='1'&&s[j+1]=='0')) {
            Q=j;break;
         }
      cout << Q+1 << ' ' << Q+2 << ' ' << (f0>f1) << endl;
      for(int j=0;j<(int)s.size();++j)
         if(j!=Q&&j!=Q+1) t+=s[j];
         else if(j==Q) t+=char((f0>f1)+48);
      s=t;
   }
   cout << 1 << ' ' << s.size() << ' ' << 0 << endl;
}
signed main() {
   int T;
   cin >> T;
   while(T--) solve();
}