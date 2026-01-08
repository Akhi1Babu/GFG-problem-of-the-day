class Solution {
public:
    int countSubarrays(vector<int>& arr, int k) {
        return atMost(arr, k) - atMost(arr, k - 1);
    }

private:
    int atMost(vector<int>& arr, int k) {
        int left = 0, odd = 0, count = 0;

        for (int right = 0; right < arr.size(); right++) {
            if (arr[right] % 2 != 0)
                odd++;

            while (odd > k) {
                if (arr[left] % 2 != 0)
                    odd--;
                left++;
            }

            count += (right - left + 1);
        }
        return count;
    }
};
