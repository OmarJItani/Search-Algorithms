#include <iostream>
using namespace std;

#include <vector>


int jump_search(vector<int> nums, int target, int step){

    /*
    Performs jump search on a sorted input array to find the index of a target value.
    If the target value is not found, returns -1.

    Input:
    nums: Sorted input array
    target: Target value searching for its index
    step: Step size of the required jump

    Output:
    mid: index of "target" in "nums". If "nums" does not contain "target", mid=-1
    */

    // check that nums is sorted   
    for (int i=0; i<nums.size()-1; i++){
        if (nums[i] > nums[i+1]){
            throw invalid_argument("Input array must be sorted in ascending order");
        }
    }

    int prev = 0;
    int curr = step;
    int n = nums.size();

    // find the block to search within
    while ((curr < n) && (nums[curr] <= target)){
        prev = curr;
        curr += step;
    }

    // linear search within the block
    for (int i=prev ; i < min(curr,n) ; i++){
        if (nums[i] == target){
            return i;
        }
    }

    // target not found, return -1
    return -1;
}

int main(){

    vector<int> nums = {1,3,4,8,9};
    int target = 10;
    int step = 2; 
    int ans = jump_search(nums, target, step);

    cout << "Index is: " << ans << endl;

    return 0;
}