#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int index = 0;
        int fillIndex = 0;
        int prev = SHRT_MAX; // Input is sorted, just compare if the previous == current
        while (index < nums.size()) {
            int num = nums[index];
            if (num != prev) {
                prev = num;
                nums[fillIndex] = num;
                fillIndex++;
            }
            index++;
        }
        return fillIndex;
    }
};

int main() {
    cout << "Hello LeetCode!\n";
    Solution solution;
    
    // int answer = solution.func()
}