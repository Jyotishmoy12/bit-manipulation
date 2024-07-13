#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    vector<string> graycode(int n) {
        vector<string> ans;
        
        for(int i = 0; i < (1 << n); ++i) {
            int gray = i ^ (i >> 1); // Calculate the Gray code
            string gray_code_str = bitset<32>(gray).to_string().substr(32 - n); // Convert to binary string of length n
            ans.push_back(gray_code_str);
        }
        
        return ans;
    }
};
