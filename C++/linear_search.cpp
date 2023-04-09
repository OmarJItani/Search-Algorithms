#include <iostream>
using namespace std;
#include <vector>

int linear_search(vector<int> nums, int target){
    /*
    Performs linear search on an input array to find the index of a target value.
    If the target value is not found, returns -1.

    Input:
    nums: Input array
    target: Target value searching for its index

    Output:
    Index of "target" in "nums". If "nums" does not contain "target", index=-1
    */
    
    //iterate sequentially over "nums" searching for "target"
    for (int i=0; i < nums.size(); i++){
        if (nums[i] == target){
            return i;
        }
    }

    // if target is not found in nums, return -1
    return -1;

};

int main(){
    vector<int> nums = {1,2,5,6,9};
    int ans = linear_search(nums,6);

    cout << "Index is: " << ans << endl;


    return 0;
}