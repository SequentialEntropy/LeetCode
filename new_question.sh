echo "Enter Question Number"
read NUMBER

mkdir $NUMBER

cd $NUMBER

echo '''#include <iostream>

using namespace std;

class Solution {
public:

};

int main() {
    cout << "Hello LeetCode!\\n";
    Solution solution;

    // Declare arguments

    // Test case 1

    // Test case 2

    // int answer = solution.func();
    // cout << answer << "\\n";
}''' >> $NUMBER.cpp

echo "g++ -std=c++11 $NUMBER.cpp; ./a.out" >> run.sh

chmod 755 run.sh