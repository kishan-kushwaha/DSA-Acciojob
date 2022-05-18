## logic
according to problem, I need to make one group of which divisible by 10 and other group is odd number.
one group = divisiblle by 10
and other = odd number

## Method-1 
- I make a array of n size.
  int a[n];
- now inilize some varibles
  int sum=0,sum10=0,odd=0,flag=1;
- iterate a loop from i=0 to n-1
  for(int i=0;i<n;i++){
      //add all number
      sum=sum+a[i];
  }
  //find odd 
  odd = sum%10;
  Now find sum10
  sum10=sum-odd

  Now check the condition both 
  if(odd%3!=0 && sum10%10==0){
      flag=1
  }

  now print yES if flag==1
  if(flag==1) print YES
  else print NO


##  Method - 2

I make a array of n size.
  int a[n];
- now inilize some varibles
  int i=0,sum=0,sumodd=0;
  now make a function recursive call
  bool flag=splitodd(a,i,sum,sumodd,n);
  now print yES if flag==1
  if(flag==1) print YES
  else print NO

look recursive function
bool splitodd(int a[],int i,int sum,int sumodd, int n){
    //check i is greater than or equal to n
    if(i>=n){
        return (sum%10==0 && sumodd%2==0) || (sum%2==0 && sumodd%10 ==0);
    }
    return splitodd(a,i+1,sum+a[i],sumodd,n) || splitodd(a,i+1,sum,sumodd+a[i],n);
}