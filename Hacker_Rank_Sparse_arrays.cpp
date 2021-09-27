#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s[n];
    for(int i=0;i<n;i++){
        cin>>s[i];
    }
    int q;
    cin>>q;

    for(int i=0;i<q;i++){
        string temp;
        cin>>temp;
        cout<<count(s,s+n,temp)<<endl;
    }
    
    return 0;
}
