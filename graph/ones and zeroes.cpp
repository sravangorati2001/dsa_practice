


/*
 * SPOJ: ONEZERO - Ones and zeros
 * Find the smallest binary digit multiple of given number
 * Link:https://www.spoj.com/problems/ONEZERO/en/ 
 * Editorial: https://www.geeksforgeeks.org/find-the-smallest-binary-digit-multiple-of-given-number/
 * Solution:  
 *
 */

                 /************* SRAVAN KUMAR **************/

#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long
#define eb emplace_back
#define mp make_pair
#define vi vector<ll>
#define mem(x,y) memset(x,y,sizeof(x)
#define fori(a,b) for(long long i=a;i<b;i++)
#define forr(a) for(long long i=a;i>=0;i--)
#define sp <<" "<<
#define nl <<"\n"
#define F first
#define S second
#define all(x)     x.begin(),x.end()
#define allr(x)     x.rbegin(),x.rend()
#define fast       ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define l(s)        (int)s.size()
#define debug(x)    cout<<x<<" "
#define hi cout<<"hi "
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"
unsigned int M = 1000000007;
int mod(string t, ll N)
{
    int r = 0;
    for (int i = 0; i < t.length(); i++)
    {
        r = r * 10 + (t[i] - '0');
        r %= N;
    }
    return r;
}
string solve(){
      ll n,ans;
        cin>>n;
        ll temp=1;
        queue<string> q;
        set<ll> s;
        q.push("1");
        while(q.size()){
           string temp=q.front();
            q.pop();
            ll rem=mod(temp,n);
            if(rem==0) return temp;
            else if(s.count(rem)==0){
                s.insert(rem);
                q.push(temp+"0");
                q.push(temp+"1");
            }
        }
        return "";
}
signed main() {
      fast;
       ll test;
       cin>>test;
       while(test--){
        cout<<solve() nl;
       }
	return 0;
   
}
