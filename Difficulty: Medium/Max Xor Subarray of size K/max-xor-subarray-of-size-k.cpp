class Solution {
  public:
    int maxSubarrayXOR(vector<int>& arr, int k) {
        // code here
        int maxxor=INT_MIN;
        int xorvalue=0;
        int n=arr.size();
        int left=0;
        int right=0;
        int count=k;
        while(right<n && left<=right){
            
            xorvalue=xorvalue^arr[right];
            if((right-left+1)>k){
                xorvalue=xorvalue^arr[left];
                left++;
            }
            if((right-left+1)==k){
                maxxor=max(xorvalue,maxxor);
            }
            
            
            right++;
            
            
          
        }
            
        
        return maxxor;
    }
};