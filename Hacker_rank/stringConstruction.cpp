#include <bits/stdc++.h>
using namespace std;

int main(){
  string s;
  int n;
  cin>>n;
  while(n--){
    cin>>s;
    vector<int>v(26,0);
    int k=s.length();
    for(int i=0;i<k;i++){
        v[s[i]-'a']=1;
    }
    cout<<count(v.begin(),v.end(),1)<<endl;
  }
}
