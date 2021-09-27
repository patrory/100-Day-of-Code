 #include<bits/stdc++.h>
 #define ll long long int
 using namespace std;
 const int N=1e7+10;
 ll arr[N];
 int main(){
 int n,m;
 cin>>n>>m;
 while(m--){
     int a,b,k;
     cin>>a>>b>>k;
     arr[a]+=k;
     arr[b+1]-=k;
 }
ll maxa=-1;
 for(int i=1;i<=n;i++){
     arr[i]+=arr[i-1];
     maxa=max(maxa,arr[i]);
 }
 cout<<maxa<<endl;
 return 0 ;
 }
