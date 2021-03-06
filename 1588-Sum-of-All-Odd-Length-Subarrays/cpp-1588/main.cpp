/// Source : https://leetcode-cn.com/problems/sum-of-all-odd-length-subarrays/
/// Author : liuyubobobo
/// Time   : 2020-09-19

#include <iostream>
#include <vector>
#include <numeric>

using namespace std;


/// Brute Force
/// Time Complexity: O(n^3)
/// Space Complexity: O(1)
class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {

        int res = 0;
        for(int i = 0; i < arr.size(); i ++)
            for(int sz = 1; i + sz - 1 < arr.size(); sz += 2)
                res += accumulate(arr.begin() + i, arr.begin() + i + sz, 0);
        return res;
    }
};


int main() {

    vector<int> arr1 = {1, 4, 2, 5, 3};
    cout << Solution().sumOddLengthSubarrays(arr1) << endl;
    // 58

    vector<int> arr2 = {1, 2};
    cout << Solution().sumOddLengthSubarrays(arr2) << endl;
    // 3

    vector<int> arr3 = {10,11,12};
    cout << Solution().sumOddLengthSubarrays(arr3) << endl;
    // 66

    return 0;
}
