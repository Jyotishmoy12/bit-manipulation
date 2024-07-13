#include <vector>
using namespace std;

class Solution {
public:
    vector<int> circularPermutation(int n, int start) {
        vector<int> permutation;
         // Generate the Gray code starting from 'start'
        for (int i = 0; i < (1<<n); ++i) {
            int gray_code = start ^ i ^ (i >> 1);
            permutation.push_back(gray_code);
        }

        return permutation;
    }
};
