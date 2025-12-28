class Solution {
bool isPossible(vector<int> &rank,int time,int donutswant){
   
    int donuts=0;
    int n=rank.size();
    for(int i=0;i<n;i++){
        int r=rank[i];
         
       int k = (-1 + sqrt(1 + 8.0 * time / r)) / 2;
       donuts+=k;
       
       
        
    }
    return donuts>=donutswant;
}
  public:
    int minTime(vector<int>& ranks, int n) {
        //using binary Search
        int ans=0;
        int low=1;
        int high=*max_element(ranks.begin(),ranks.end())*(n*(n+1)/2);
        
        while(low<=high){
            int mid=(low+high)/2;
            if(isPossible(ranks,mid,n)){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
        
    }
};