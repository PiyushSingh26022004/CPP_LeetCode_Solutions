/*class Solution {
public:
    int maxProduct(vector<int>& nums) {
        
       int n = nums.size();
        int k=nums[0];
        for(int i=0;i<n;i++){
            if(i+1<n){
           if(k < nums[i] * nums[i+1]){
                k = nums[i] * nums[i+1];  } 
         }}
        return k;
    }
}; */

class Solution {
public:

int maxProduct(vector<int> A) {
        int n = A.size(), res = A[0], l = 0, r = 0;
        for (int i = 0; i < n; i++) {
            l =  (l ? l : 1) * A[i];
            r =  (r ? r : 1) * A[n - 1 - i];
            res = max(res, max(l, r));
        }
        return res;
    } };