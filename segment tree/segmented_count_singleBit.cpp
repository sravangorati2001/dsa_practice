#include<bits/stdc++.h>
using namespace std;
int a[1000], seg[1000];
bool isPowerof2(int x){
    if(x==0) return 0;
    return !(x & (x-1));
}
void fill(int ind,int low,int high){
    if(low==high){
        seg[ind]=isPowerof2(a[low]);
        return;
    }
    int mid=(low+high)/2;
    fill(ind*2+1,low,mid);
    fill(ind*2+2,mid+1,high);
    seg[ind]=seg[ind*2+1]+seg[ind*2+2];
    return;
}
void update(int ind,int low ,int high,int i,int val){
    if(i<low or i>high) return;
    if(low==high){
        seg[ind]=val;
        return ;
    }
    int mid=(low+high)/2;
    update(ind*2+1,low,mid,i,val);
    update(ind*2+2,mid+1,high,i,val);
    seg[ind]=isPowerof2(seg[ind*2+1])+isPowerof2(seg[ind*2+2]);
}
int query(int ind ,int low ,int high,int l,int h){
    if(high<l or h<low) return 0;
    if(low>=l and h>=high){
      return seg[ind];
    }
    int mid=(low+high)/2,ans=0;
    ans+=query(ind*2+1,low,mid,l,h);
    ans+=query(ind*2+2,mid+1,high,l,h);
    return ans;
}
int main(){
   int n;
   cin>>n;
   for(int i=0;i<n;i++) cin>>a[i];
   fill(0,0,n-1);
   int t;
   cin>>t;
  // cout<<seg[0]<<endl;
   while(t--){
       int a,b,c;
       cin>>a>>b>>c;
       if(a==1) 
       cout<<query(0,0,n-1,b,c)<<" \n";
       else update(0,0,n-1,b,c);
   }
}