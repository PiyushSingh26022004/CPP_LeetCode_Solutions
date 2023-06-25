//{ Driver Code Starts
/* Driver program to test above function */

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution
{
   public:
    int findSum(int A[], int N)
    {
         int l=A[0];
       int k=A[0];
   for(int i=1;i<N;i++){
   if(k>A[i]){ 
   }
   else
      k=A[i];
   }
  
   for(int i=1;i<N;i++){
   if(l<A[i]){}
   else
    l=A[i]; }
    
    return l+k;
    
    }
  
    

};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	      cin>>arr[i];
	    Solution ob;  
	    int ans=ob.findSum(arr, n);
	    cout<<ans;
	    cout<<"\n";
	}
	return 0;
}

// } Driver Code Ends