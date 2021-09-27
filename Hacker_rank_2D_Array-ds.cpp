#include <bits/stdc++.h>

using namespace std;
int main(){
    int sum_max= INT_MIN;
    int arr[7][7];
    for(int i=1;i<=6;i++ ){
        for(int j=1;j<=6;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=1;i<=4;i++){
        for(int j=1;j<=4;j++){
            int sum= arr[i][j]+arr[i][j+1]+arr[i][j+2]+arr[i+1][j+1]+arr[i+2][j]+arr[i+2][j+1]+arr[i+2][j+2];
            sum_max= max(sum_max,sum);
      }
    }
    cout<<sum_max;
}
