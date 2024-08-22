class Solution {
public:
    int findComplement(int num) {
    if(num==0) return 1;
    int res=0;
    int power=1;
    while(num>0){
        // If the least significant bit is 0, add 1 to the result
        if((num&1)==0){
            res+=power;
        }
        num >>= 1;
        power <<= 1;
    } 
    return res;   
    }
};

We handle the edge case where the input is 0. The complement of 0 is 1.
We initialize result to store our complement and power to keep track of the current bit position (starting from 2^0 = 1).
We enter a loop that continues as long as num is greater than 0:

We check if the least significant bit of num is 0 using num & 1.
If it is 0, we add the current power to our result. This is equivalent to setting this bit to 1 in the complement.
We right-shift num by 1 bit to move to the next bit.
We left-shift power by 1 to move to the next power of 2.


Once we've processed all bits, we return the result.

This solution has the following complexities:

Time Complexity: O(log n), where n is the input number. We process each bit of the number once.
Space Complexity: O(1), as we only use a constant amount of extra space.
