 #include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
		
        for(int i=0;i<n;i++){
          cin>>arr[i];
        }
         int largest = 0, secondLargest = -1;
        for (int i = 1; i < n; i++) {
            if (arr[i] > arr[largest])
                largest = i;
        }
    
        for (int i = 0; i < n; i++) {
            if (arr[i] != arr[largest]) {
            if(secondLargest == -1)
                    secondLargest = i;
                else if (arr[i] > arr[secondLargest])
                    secondLargest = i;
            }
        }
        if (secondLargest != -1)
          cout<<arr[secondLargest];

        


return 0;
}

