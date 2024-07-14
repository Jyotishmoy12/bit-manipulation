class Solution {
public:
    int countTriplets(vector<int>& arr) {
        int n = arr.size();
        vector<int> pref(n + 1, 0); // prefix XOR array
        int triplets = 0;
        
        for (int i = 1; i <= n; ++i) {
            pref[i] = pref[i - 1] ^ arr[i - 1];
        }
        
        for (int i = 0; i < n; ++i) {
            for (int k = i + 2; k <= n; ++k) { // k starts from i+2 to ensure k - i > 1
                if (pref[i] == pref[k]) {
                    triplets += k - i - 1;
                }
            }
        }
        
        return triplets;
    }
};
