#include <iostream>
using namespace std;

int main() {
  int t;
  std::cin >> t;
  while(t!=0){
      long n, k;
    cin >> n >> k;

    if(n - k == 1)
        cout << -1;

    else if(n == k)
        for(int i=1;i<=n;i++)
            cout << i << ' ';
    
    else
    {
        for(int i=1;i<=k;i++)
            cout << i << " ";
        cout << n << ' ';
        for(int i=k+1;i<n;i++)
            cout << i << " "; 
    }
    
    cout << '\n';
      t--;
  }
  return 0;
}
