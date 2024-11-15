#include <iostream>
#include <vector>
#include <map>

using namespace std;

class Solution {
public:
    int hIndex(vector<int>& citations) {
        // Find max
        int max = 0;
        for (int i = 0; i < citations.size(); i++) {
            if (citations[i] > max) {
                max = citations[i];
            }
        }

        map<int, int> accumulator;

        for (int i = 0; i < citations.size(); i++) {
            int c = citations[i];
            for (int j = 1; j <= c; j++) {
                accumulator[j]++;
            }
        }

        int max_accum = 0;
        for (int i = 1; i <= max; i++) {
            if (accumulator[i] >= i) {
                max_accum = i;
            }
        }

        return max_accum;
    }
};

int main() {
    cout << "Hello LeetCode!\n";
    Solution solution;

    // Declare arguments
    vector<int> citations;

    // Test case 1
    citations = {3, 0, 6, 1, 5};

    // Test case 2
    citations = {1, 3, 1};

    int answer = solution.hIndex(citations);
    cout << answer << "\n";
}
