class Solution {
  public:
    int longestSubarray(vector<int> &arr, int k) {
        // Code here
        map<int,int> mpp;
        int n=arr.size();
        int ans=0;
        int sum=0;
        for(int i=0;i<n;i++){
            if(arr[i]>k){
                sum+=1;
            }
            else{
                sum-=1;
            }
            if(sum>0){
                ans=i+1;
            }
            else{
                if(mpp.find(sum-1)!=mpp.end()){
                    ans=max(ans,i-mpp[sum-1]);
                }
                
                if(mpp.find(sum)==mpp.end()){
                    mpp[sum]=i;
                }
            }
        }
        return ans;
    }
};