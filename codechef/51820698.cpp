#include <bits/stdc++.h>
using namespace std;

int main() {

int test_case;
cin>>test_case;
while(test_case--){
 int n;
 cin>>n;
int arr[n];
int odd=0,a2s=0;
for(int i=0;i<n;i++){
    cin>>arr[i];
    if(arr[i]%2 == 1){
        odd++;
    }
    if(arr[i]==2){
        a2s++;
    }
}
  if(odd>0){
      cout<<"0"<<endl;
  }  
  else if(a2s>0){
      cout<<"1"<<endl;
  }
  else{
      int a=0;
      int ans =INT_MAX;
      for(int i=0;i<n;i++){
          a=0;
          while(arr[i]%2==0){
              arr[i]/=2;
              a++;
          }
          ans=min(ans,a);
      }
      cout<<ans<<endl;
  }
}
	return 0;
}
