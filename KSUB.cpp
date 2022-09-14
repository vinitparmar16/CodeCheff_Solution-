#include <iostream>
#include<bits/stdc++.h>
using namespace std;

void solution(){
    int n,k;
    cin >> n >>k;
    vector<int> a;
    int x;
    int g = 0;
    for(int i=0; i<n; i++){
        cin >> x;
        g = __gcd(g,x);
        a.push_back(x);
    }
    
    x=0;
    int count = 0;
    for(int i=0; i<n; i++){
        x =  __gcd(x,a[i]);
        if(x==g){
            count++;
            x=0;
        }
    }
    if(count>=k)
        cout<< "YES" << endl;
    else
        cout << "NO" << endl;
    
    return;
    
    
    
}

int main() {
  // your code goes here
  int t; cin>> t;
  while(t--)
      solution();
  return 0;
}