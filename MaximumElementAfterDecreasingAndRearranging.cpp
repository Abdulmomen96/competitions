class Solution {
public:
    int maximumElementAfterDecrementingAndRearranging(vector<int>& arr) {
        int max = 1;
        if (arr[0] == 1)
        {


        
            for (size_t i = 1; i < arr.size(); ++i) {
                if (max < arr[i]) max = arr[i];
                int difference = arr[i] - arr[i - 1];
                if (difference > 1) break;
                if (i == arr.size() - 1) return max;
            }
        }
        

        std::sort(arr.begin(), arr.end());

    
        arr[0] = 1;
        // Check the difference between consecutive elements
        //cout << "Differences between consecutive elements:\n";
        for (size_t i = 1; i < arr.size(); ++i) {
            int difference = arr[i] - arr[i - 1];
            if (difference > 1) arr[i] = arr[i-1] + 1;
        }

        return arr.back();
        
    }
    
    
};
