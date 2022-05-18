# include <iostream>
using namespace std;
int main() {
    // your code here
        int n;
        cin>>n;

      int a [n]; 
      for(int i=0;i<n;i++){
     cin>>a[i];
      }
      int sum=0,odd=0,sum10=0;
      for(int i=0;i<n;i++){
        sum=sum+a[i];
      }
      odd=sum%10;
      sum10=sum-odd;
      int flag=0;
      if(odd%3!=0 && sum10%10==0){
        flag=1;
      }
      
      if(flag == 1){
        cout<<"YES";
      }
      else{
        cout<<"NO";
        }
    return 0;
}