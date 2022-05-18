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
        int first = 0, second = -1;
            for (int i = 1; i < n; i++) {
                if (arr[i] > arr[first]) {
                    second = first;
                    first = i;
                }
                else if (arr[i] < arr[first]) {
                    if (second == -1 || arr[second] < arr[i])
                        second = i;
                }
            }
            int index=second;
            if (index != -1)
        cout<<arr[index];

return 0;
}

