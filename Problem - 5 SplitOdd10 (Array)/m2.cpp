# include <bits/stdc++.h>
using namespace std;

bool splitodd(int a[], int i, int sum, int sumodd,int n){
  if(i>=n){
     return (sum%10 == 0 && sumodd%2 == 0) || (sum%2==0 && sumodd%10==0);
 }
  int value=a[i];
  return (splitodd(a,i+1,sum+value,sumodd,n) || splitodd(a,i+1,sum,sumodd+10,n));
}


int main() {
    // your code here
        int n;
        cin>>n;

      int a [n]; 
      for(int i=0;i<n;i++){
     cin>>a[i];
      }
    int i=0,sum=0,sumodd=0;
     bool flag=splitodd(a,i,sum,sumodd,n);
    if(flag){
      cout<<"YES";
    }
    else{
      cout<<"NO";
    }
      
    return 0;
}