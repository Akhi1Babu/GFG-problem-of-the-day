class Solution {
  public:
    int maxSubarraySum(vector<int>& arr, int k) {
        // code here
        int left=0;
        int right=0;
        int sum=0;
        int maxsum=INT_MIN;
        while(right<=right && right<arr.size()){
            sum=sum+arr[right];
            if((right-left+1)>k){
                sum=sum-arr[left];
                left++;
            }
            if((right-left+1)==k){
                maxsum=max(maxsum,sum);
            }
            right++;
        }
        return maxsum;
    }
};