#include <bits/stdc++.h>
using namespace std;

int main() {

int test_case;
cin>>test_case;
while(test_case--){
    int x,y;
    cin>>x>>y;
    if( (x+y)%2==0){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"no"<<endl;
    }
}
	return 0;
}
