class Solution {
  public:
    vector<vector<int>> insertInterval(vector<vector<int>> &intervals,
                                       vector<int> &newInterval) {
        // code here
        int n=intervals.size();
        vector<vector<int>> result;
        
        int i=0;
     
        while(i<n){
            if(intervals[i][1]<newInterval[0]){
                result.push_back(intervals[i]);
                
                i++;
              
            }
            else{
                break;
            }
              
         
        }
        while(i<n){
            
                if(intervals[i][0]<=newInterval[1] && intervals[i][1]>=newInterval[0]){
                    newInterval[0]=min(intervals[i][0],newInterval[0]);
                   newInterval[1]=max(intervals[i][1],newInterval[1]);
                   i++;
                   
                    
                
                 }
                 else{
                     break;
                 }
                 
                 
                 
            
            
           
            
        }
        result.push_back(newInterval);
       
       
       
            
          
        
        // while(i<n){
        //     if(intervals[i][1] <= result.back()[1]){
        //         i++;
        //     }
        //     else if(intervals[i][0]<=result.back()[1] && intervals[i][1]>=result.back()[0]){
        //         result.back()[1]=intervals[i][1];
        //         i++;
        //     }
        //     else{
        //         break;
        //     }
        // }
        
        while(i<n){
            result.push_back(intervals[i]);
            i++;
        }
        return result;
    }
};