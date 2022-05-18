// Time Complexity: O(max(a,b))
// Auxiliary Space: O(max(a,b))

# include <bits/stdc++.h>
using namespace std;

int gcd(int a,int b){
  if(a==0){
    return b;
  }
  if(b==0){
    return a;
  }
  if(a==b){
    return a;
    
  }
  if(a<b){
    return gcd(a,b-a);
  }
  
    return gcd(a-b,b);

  
  }
int main() {
    // your code here
  int a,b;
  cin>>a>>b;

  cout<<gcd(a,b);

    return 0;
}
