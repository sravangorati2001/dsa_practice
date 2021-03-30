#include<bits/stdc++.h>
using namespace std;
long long a[1000000],seg[1000000],lazy[1000000];
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
long long query(int ind,int low,int high,int i){
    if(lazy[ind]){
       seg[ind]+=(high-low+1)*lazy[ind];
       if(low!=high){
           lazy[ind*2+1]+=lazy[ind];
           lazy[ind*2+2]+=lazy[ind];
       }
       lazy[ind]=0;
   }
   if(high<i or i<low) return 0;
   if(low==high) return seg[ind];
   int mid=(low+high)/2;
 return 1LL*( query(ind*2+1,low,mid,i) + query(ind*2+2,mid+1,high,i));  
}
void update(int ind,int low,int high,int l,int h,int val){
   if(lazy[ind]){
       seg[ind]+=(high-low+1)*lazy[ind];
       if(low!=high){
           lazy[ind*2+1]+=lazy[ind];
           lazy[ind*2+2]+=lazy[ind];
       }
       lazy[ind]=0;
   }
   if(high<l or h<low) return ;
   if(low>=l and high<=h){
       seg[ind]+=(high-low+1)*val;
       if(low!=high){
           lazy[ind*2+1]+=val;
           lazy[ind*2+2]+=val;
       }
       return;
   }
   int mid=(low+high)/2;
   update(ind*2+1,low,mid,l,h,val);
   update(ind*2+2,mid+1,high,l,h,val);
   seg[ind]=seg[ind*2+1]+seg[ind*2+2];
   return;
}
signed main(){
    int n,t;
    cin>>n>>t;
    for(int i=0;i<n;i++) cin>>a[i];
    fill(0,0,n-1);
    while(t--){
        int a,b,c,d;
        cin>>a;
        if(a==1){
            cin>>b>>c>>d;
         update(0,0,n-1,b-1,c-1,d);
        } 
        else{
            cin>>b;
       cout<< query(0,0,n-1,b-1)<<"\n";
        }
    }
}