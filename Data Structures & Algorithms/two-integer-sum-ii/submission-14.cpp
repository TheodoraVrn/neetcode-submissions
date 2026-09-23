class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        for (int i = 0; i < numbers.size(); i++) {
            int low = i;
            int high = numbers.size() - 1;
            int goal = target - numbers[i];
            while (low <= high) {
                int mid = low + (high - low) / 2; // = (low+high)/2

                if (numbers[mid] == goal)
                    return {i + 1, mid + 1};

                // If goal numbers is greater, ignore left half
                if (numbers[mid] < goal)
                    low = mid + 1;

                // If goal numbers is smaller, ignore right half
                else
                    high = mid - 1;
            }
        }

        /*int left = 0;
        int right = numbers.size() - 1;

        while (left < right) {
            if (numbers[left] + numbers[right] > target) {
                right --;
                continue;
            }
            else if (numbers[left] + numbers[right] < target) {
                left++;
                continue;
            }
            else return {left + 1, right + 1};
        }*/
    }
};
