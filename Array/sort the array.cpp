 //  is it possible to sort the array a (in increasing order) by reversing exactly one segment of a


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
  ll solve(string a,string b,ll count){
       if(l(a)==0 or l(b)==0) return 0;
       ll x=0,y=0,z=0;
       if(a[0]==b[0]) return  x=solve(a.substr(1),b.substr(1),1+count);
      y=solve(a,b.substr(1),0);
      z=solve(a.substr(1),b,0);
       return max({count,x,y,z});
  }
  
signed main() {
      fast;
         ll n,x=-1,y=-1;
         cin>>n;
         ll a[n];
         fori(0,n) cin>>a[i];
         for(ll i=1;i<n;i++){
              if(a[i]<a[i-1]){
                   if(x==-1) x=i-1;
                   if(y!=-1){
                    cout<<"no\n";
                        return 0;    
                   }
              }
              else if(x!=-1){
                   if(a[x]>a[i]){
                        cout<<"no\n";
                        return 0;
                   }
                   else if(y==-1) y=i-1;
              }
         }
         if(x>0 and y==-1 and a[x-1]>a[n-1]){
               cout<<"no\n";
                        return 0;
         }
         cout<<"yes\n";
         if(x==-1 and y==-1) cout<<"1 1\n";
         else if(x!=-1 and y==-1) cout<<x+1 sp n nl;
         else cout<<x+1 sp y+1 nl;
	return 0;
   
}
