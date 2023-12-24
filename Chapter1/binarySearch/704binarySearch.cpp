// date : 4/12/2023
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    static int search(vector<int>& nums, int target) {
        int l = 0;
        int r = nums.size() -1;
        while (l <= r)
        {
            int m = (l + r)/2;
            if (nums[m] == target)
                return m;
            if (nums[m] < target)
                l = m + 1;
            else 
                r = m - 1;

            
        }
        
        return -1;
        
    }
};

/* find middle of the array 
    check if the number is greater or smaller or ==
    if number is  ==  return 
    else take the new array and repeat 

*/

int main(){
    vector<int> nums = {-1,0,3,5,9,12};
    int targetIndex = Solution::search(nums, 2);
    cout << targetIndex << endl;
    return 0;
    
}