class Solution {
  public:
    vector<int> missinRange(vector<int>& arr, int low, int high) {
        // code here
        int n=arr.size();
        sort(arr.begin(),arr.end());
        vector<int> result;
        for(int i=low;i<=high;i++){
            auto it=binary_search(arr.begin(),arr.end(),i);
            if(it==false){
                result.push_back(i);
            }
            
        }
        return result;
        
    }
};