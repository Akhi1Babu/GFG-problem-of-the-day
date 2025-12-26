class Solution {
  public:
    int kthMissing(vector<int> &arr, int k) {
        // code here
        int curr = 1;
        int i = 0;
        int n = arr.size();

        while (true) {
            if (i < n && arr[i] == curr) {
                i++; // number present
            } else {
                k--; // number missing
                if (k == 0)
                    return curr;
            }
            curr++;
        }
    }
};