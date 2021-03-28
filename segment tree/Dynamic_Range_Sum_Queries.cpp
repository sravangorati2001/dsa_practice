#include<bits/stdc++.h>
using namespace std;
long long a[1000000],seg[1000000];
void fill(int ind,int low ,int high){
    if(low==high){
    seg[ind]=a[low];
    return;
    }
    int mid=(low+high)/2;
    fill(ind*2+1,low,mid);
    fill(ind*2+2,mid+1,high);
    seg[ind]=seg[ind*2+1]+seg[ind*2+2];
    return;
}
long long query(int ind,int low,int high,int l,int h){
    if(high<l or h<low) return 0;
    if(low>=l and h>=high) return seg[ind];
    long long mid=(low+high)/2,ans=0;
   ans+= query(ind*2+1,low,mid,l,h);
    ans+=query(ind*2+2,mid+1,high,l,h);
  return ans*1LL;
}
void update(int ind,int low,int high,int i,int val){
    if(i<low or i>high){
        return;
    }
    if(high==low){
        seg[ind]=val;
        return;
    }
    int mid=(low+high)/2;
    update(ind*2+1,low,mid,i,val);
    update(ind*2+2,mid+1,high,i,val);
    seg[ind]=seg[ind*2+1]+seg[ind*2+2];
}
signed main(){
    int n,t;
    cin>>n>>t;
    for(int i=0;i<n;i++) cin>>a[i];
    fill(0,0,n-1);
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        if(a==1) update(0,0,n-1,b-1,c);
        else
       cout<< query(0,0,n-1,b-1,c-1)<<"\n";
    }
}