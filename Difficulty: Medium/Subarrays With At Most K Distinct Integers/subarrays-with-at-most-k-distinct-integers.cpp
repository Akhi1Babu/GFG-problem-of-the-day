class Solution {
  public:
    int countAtMostK(vector<int> &arr, int k) {
        // code here
        map<int,int> mpp;
        int n=arr.size();
        int count=0;
        int left=0;
        int right=0;
        while(right<n && left<=right){
            mpp[arr[right]]++;
            while(mpp.size()>k){
                mpp[arr[left]]--;
                if(mpp[arr[left]]==0){
                    mpp.erase(arr[left]);
                    
                }
                left++;
            }
            if(mpp.size()<=k){
                count=count+(right-left+1);
            }
            right++;
        }
        return count;
    }
};