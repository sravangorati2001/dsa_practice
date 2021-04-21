                 /************* SRAVAN KUMAR **************/

#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long
#define fori(a,b) for(long long i=a;i<b;i++)
#define fore(a,b) for(long long i=a;i<=b;i++)
#define sp <<" "<<
#define nl <<"\n"
#define all(x)     x.begin(),x.end()
#define fast       ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define l(s)        (int)s.size()
#define lcm(a,b)    (a*b)/__gcd(a,b)
unsigned int M = 1000000007;

  
signed main() {
      fast;
      ll n,t;
      cin>>n>>t;
      ll a[n];
      fori(0,n) cin>>a[i];
      ll i=0,j=0,sum=0,ans=0;
      while(j<n){
                sum+=a[j];
                while(sum>t and i<j) {
                     sum-=a[i];
                     i++;
                }
                if(sum<=t)
                 ans=max(ans,j-i+1);
           j++;
      }
      cout<< ans nl;
	return 0;
   
}
