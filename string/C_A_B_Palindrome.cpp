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


template<typename T> void scan(T &x)
{
    x = 0;
    bool neg = 0;
    register T c = getchar();
    if (c == '-')
        neg = 1, c = getchar();
    while ((c < 48) || (c > 57))
        c = getchar();
    for ( ; c < 48||c > 57 ; c = getchar());
    for ( ; c > 47 && c < 58; c = getchar() )
        x= (x << 3) + ( x << 1 ) + ( c & 15 );
    if (neg) x *= -1;
}
  void solve(){
    ll a,b,x=0;
    cin>>a>>b;
    string s,ans;
   // cout<<ans nl;
    cin>>s;
    fori(0,l(s)) {
         if(s[i]=='1') b--;
         else if(s[i]=='0') a--;
    }
    ans=s;
    x=a+b;
    ll i=0,j=s.size()-1;
    while(i<j){
          if(s[i]!=s[j]){
              if(s[i]=='?'){
                   if(s[j]=='1'){
                         b--;
                         ans[i]='1';
                         x--;
                   }
                   else {
                        a--;
                        ans[i]='0';
                        x--;
                   }
              }
              else if(s[j]=='?'){
                  if(s[i]=='1'){
                         b--;
                         ans[j]='1';
                   }
                   else {
                        a--;
                        ans[j]='0';
                   }
                   x--;
              }
              else{
                   cout<<"-1\n";
                   return;
              }
         }
         i++;
         j--;
    }
    i=0,j=s.size()-1;
    while(i<j){
         if(s[i]==s[j] and s[i]=='?' ){
              if(a>=b) {
                   a-=2;
                   ans[i]='0';
                   ans[j]='0';
                   x-=2;
              }
              else {
                   b-=2;
                   ans[i]='1';
                   ans[j]='1';
                   x-=2;
              }
         }
         i++;
         j--;
    }
    if(i==j and ans[i]=='?'){
         if(a>0) {
              ans[i]='0';
              a--;
         }
         else if(b>0) {
              ans[i]='1';
              b--;
         }
    }
    if(a==0 and b==0 ){
         cout<< ans nl;
    }
    else cout<<"-1\n";
//cout<< a sp b sp ans nl;
  }
  
signed main() {
      fast;
       ll t;
       cin>>t;
       while(t--){
           solve();
       }
	return 0;
   
}