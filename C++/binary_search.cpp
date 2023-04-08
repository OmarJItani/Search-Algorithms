#include <iostream>
using namespace std;
#include <vector>

int binary_search(vector<int> nums, int target){
    /*
    Searches for integer "target" in vector "nums"
    Input:
        nums: sorted vector of integers
        target: integer to be searched for
    Output:
        ans: index of the integer "target"
    */


    // Check if the array is sorted
    for (int i = 1; i < nums.size(); i++) {
        if (nums[i] < nums[i-1]) {
            throw invalid_argument("Input array must be sorted in ascending order");
        }
    }

    // perform binary search
    int low = 0;
    int high = nums.size() - 1;
    int mid = (low + high)/2;

    while (low < high){
        if(nums[mid] < target){
            low = mid +1;
        }
        else{
            high = mid;
        }
        mid = (low + high)/2;
    }
    
    int ans = low;
    
    // check if target is in nums, if not return -1
    if (nums[ans] != target) {
        return -1;
    }

    return ans;
};

int main(){

    vector<int> nums = {0,1,5,7,9,10};
    int target = 10;

    int ans = binary_search(nums,target); 
    cout << "Index is: " << ans << endl;

    return 0;
}
