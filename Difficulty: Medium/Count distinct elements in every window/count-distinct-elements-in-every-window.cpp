class Solution {
  public:
    vector<int> countDistinct(vector<int> &arr, int k) {
        // code here
        map<int,int> mpp;
        vector<int> result;
        int left=0;
        int right=0;
        int n=arr.size();
        while(right<n && left<=right){
             mpp[arr[right]]++;
                
            if((right-left+1)>k){
                mpp[arr[left]]--;
                if(mpp[arr[left]]==0){
                    mpp.erase(arr[left]);
                }
                left++;
                
                
            }
            if((right-left+1)==k){
                int s=mpp.size();
                result.push_back(s);
                
                
            }
            right++;
           
         
        }
        return result;
    }
};