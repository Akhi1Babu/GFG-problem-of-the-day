class Solution {
  public:
    int equalSumSpan(vector<int> &a1, vector<int> &a2) {
        // code here
        unordered_map<int,int> mpp;
        int n=a1.size();
        mpp[0]=-1;
        int s1=0;
        int s2=0;
        int maxspan=0;
        for(int i=0;i<n;i++){
            s1+=a1[i];
            s2+=a2[i];
            int diff=s1-s2;
            if(mpp.find(diff)!= mpp.end()){
                maxspan=max(maxspan,i-mpp[diff]);
            }
            else{
                mpp[diff]=i;
            }
        }
        return maxspan;
        
    }
};