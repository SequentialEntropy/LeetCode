echo "Enter Question Number";
read number

mkdir $number

cd $number

echo '''#include <iostream>

using namespace std;

class Solution {
public:
};

int main() {
    cout << "Hello LeetCode!\\n";
}''' >> $number.cpp