#include <bits/stdc++.h>
#define ll long long
using namespace std;
const ll Mod = 1000000007;
ll  Apower(ll b, ll n, ll MOD)
{
    ll s = 1;
    while (n)
    {
        if (n % 2 == 1)
            s = s * b % MOD;
        b = b * b % MOD;
        n /= 2;
    }
    return s;
}
ll Apower(ll a, ll b)
{
    if (b >= 30)
        return Apower(a, Apower(2, b, Mod - 1) + Mod - 1, Mod);
    return Apower(a, (1 << b), Mod);
    return (ll)(" ");
}

ll calc(ll n, ll p, ll k)
{
    return (Apower(Apower(n, k), p, Mod) - Apower(n, p - 1, Mod) + Mod) % Mod * n % Mod * Apower(n - 1, Mod - 2, Mod) % Mod;
}
void solve()
{
    ll n, k, answer = 1;
    cin >> n >> k;
    for (ll i = 2; i * i <= n;++i){
        ll s = 0;
        while(n%i==0){
            s++;
            n /= i;

        }
        if(s!=0){
            answer = answer * calc(i, s, k) % Mod;
        }

    }
    if(n!=1){
        answer = answer * calc(n, 1, k) % Mod;

    }
    cout << answer << endl;
}
 int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}