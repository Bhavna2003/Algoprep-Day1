//{ Driver Code Starts
#include<bits/stdc++.h>
 
using namespace std; 


bool findPair(int arr[], int size, int n);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int l,n;
        cin>>l>>n;
        int arr[l];
        for(int i=0;i<l;i++)
            cin>>arr[i];
        if(findPair(arr, l, n))
            cout<<1<<endl;
        else cout<<"-1"<<endl;
    }
    
  
    return 0;
}
// } Driver Code Ends


bool findPair(int arr[], int size, int n){
    //code
    int l = 0;
    int r = 1;
    
    sort(arr, arr + size);
    
    while(l < size && r < size){
        if(l==r){
            r++;
        }
        if (l != r && arr[l]-arr[r] == n || arr[r]-arr[l] == n){
            return true;
        }else if(arr[r]-arr[l] < n ){
            r++;
        }else {
            l++;
        }
    }
    return false;
}