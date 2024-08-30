#include <iostream>
#include <vector>
#include <set>

using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int index = 0;
        int fillIndex = 0;
        set<int> existing;
        while (index < nums.size()) {
            int num = nums[index];
            if (existing.find(num) == existing.end()) {
                existing.insert(num);
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
