class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> numSet; 
        int longest = 0;

        for (auto num : nums) {
            numSet.insert(num);
        }

        // will find the max length when we find the min element of its sequence. 
        // even if a number is included in the sequence, we won't loop it as it is not the start of the sequence
        for (auto num : numSet) {
            if (numSet.find(num - 1) == numSet.end()) {// if -1 number is not found, then we have a start of a sequence
                int length = 1;
                while (numSet.find(num + length) != numSet.end()) { // if next element is not found --> end of a sequence
                    // next element is found
                    length++;
                }
                longest = max(longest, length);
            }
        }
        return longest;
    }
};
