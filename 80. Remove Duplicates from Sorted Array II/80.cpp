#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int fillIndex = 0;
        int prev = INT_MAX;
        int prev2 = INT_MAX;
        for (int index = 0; index < nums.size(); index++) {
            int num = nums[index];
            if (!(prev == num && prev2 == num)) {
                nums[fillIndex] = num;
                fillIndex++;
            }
            prev2 = prev;
            prev = num;
        }
        return fillIndex;
    }
};

int main() {
    cout << "Hello LeetCode!\n";
    Solution solution;
    
    // int answer = solution.func()
}
