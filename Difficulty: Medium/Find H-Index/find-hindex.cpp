class Solution {
  public:
    int hIndex(vector<int>& citations) {
        // code here
        sort(citations.begin(),citations.end());
        int maxHindex=-1;
        int n=citations.size();
        int low=0;
        int high=citations[n-1];
        while(low<=high){
            int mid=(low+high)/2;
            int hindex=mid;
            int greaterpaper=n-(lower_bound(citations.begin(),citations.end(),hindex)-citations.begin());
            if(greaterpaper>=hindex){
                maxHindex=hindex;
                low=mid+1;
               
            }
            else{
                 high=mid-1;
            }
        }
        return maxHindex;
    }
};