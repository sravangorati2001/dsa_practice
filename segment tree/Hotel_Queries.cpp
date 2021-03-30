#include<bits/stdc++.h>
using namespace std;
const int N = 2000005;
long long seg[2*N+1],a[N+1];
void build(long long ind,long long low,long long high){
    if(low==high){
        seg[ind]=a[low];
        return;
    }
    long long mid=(low+high)/2;
    build(ind*2+1,low,mid);
    build(ind*2+2,mid+1,high);
    seg[ind]=max(seg[ind*2+1],seg[ind*2+2]);
}
long long query(long long ind,long long low,long long high,long long val){
    if(seg[ind]<val) return 0;
    if(low==high and seg[ind] >=val ) {
        seg[ind]-=val;
        return low+1;
    }
    long long mid=(low+high)/2,ans=0;
    if(seg[ind*2+1]>=val)
   ans=query(ind*2+1,low,mid,val) ;
   else
   ans= query(ind*2+2,mid+1,high,val);
   if(low!=high)
   seg[ind]=max(seg[ind*2+1],seg[ind*2+2]);
   return ans;
}
int main(){
  long long n,t;
  cin>>n>>t;
  for(long long i=0;i<n;i++) cin>>a[i];
  build(0,0,n-1);
  while(t--){
      long long val;
      cin>>val;
     cout<< query(0,0,n-1,val)<<" ";
  }
}