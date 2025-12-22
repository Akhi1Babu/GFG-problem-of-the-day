// User function template for C++
class Solution {
private:
    int findCount(vector<int> arr){
        int count=arr.size()-(lower_bound(arr.begin(),arr.end(),1)-arr.begin());
        return count;
    }
  public:
    int rowWithMax1s(vector<vector<int>> &arr) {
        // code here
        int n=arr.size();
        int count=0;
        int rowno=-1;
        int maxcount=-1;
       for(int i=0;i<n;i++){
           int count=findCount(arr[i]);
           if(count>maxcount){
               maxcount=count;
               rowno=i;
           }
       }
       return rowno;
    }
};