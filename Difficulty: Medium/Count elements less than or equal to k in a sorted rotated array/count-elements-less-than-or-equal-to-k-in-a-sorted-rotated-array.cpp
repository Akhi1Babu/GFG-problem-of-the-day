class Solution {
  private:
    int counting(vector<int> &arr,int x,int mid,int low){
        int count=0;
        count=((upper_bound(arr.begin()+low,arr.begin()+mid+1,x)-arr.begin())-low);
        return count;
    }
    public:
    int countLessEqual(vector<int>& arr, int x) {
        // code here
        int n=arr.size();
        int low=0;
        int high=n-1;
        int count=0;
        while(low<=high){
            int mid=(low+high)/2;
            if(arr[low]<=arr[mid]){ // left is sorted..
                count=count+counting(arr,x,mid,low);
                low=mid+1;
            
                
            }
            else if(arr[mid]<=arr[high]){
                count=count+counting(arr,x,high,mid);
                high=mid-1;
            }
        }
        return count;
    }
};