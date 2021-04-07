#include<bits/stdc++.h>
 using namespace std;
 #define ll long long
 int main(){
   ll n,x;
   cin>>n>>x;
   ll a[n];
   for(int i=0;i<n;i++)  cin>>a[i];
   sort(a,a+n);
   ll ans=0,i=0,j=n-1;
   while(i<=j){
        if(a[j]+a[i]<=x) i++;
         j--;
        ans++;
   }
   cout<< ans<<"\n";
 }