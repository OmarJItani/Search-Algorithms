def binary_search(nums, target):

    """
    Performs binary search on a sorted input array to find the index of a target value.
    If the target value is not found, returns -1.

    Input:
    nums: Sorted input array
    target: Target value searching for its index

    Output:
    mid: index of "target" in "nums". If "nums" does not contain "target", mid=-1
    """

    # Check if the array is sorted
    if not all(nums[i] <= nums[i+1] for i in range(len(nums)-1)):
        raise ValueError("Input array must be sorted in ascending order")
    
    # Binary search
    low, high = 0, len(nums)-1
    while low <= high:
        mid = (low + high) // 2
        if target == nums[mid]:
            return mid
        elif target > nums[mid]:
            low = mid + 1
        else:
            high = mid - 1
    
    # Target value not found in array
    mid = -1
    return mid

if __name__ == "__main__":

    nums = [-1,0,1,3,5,4]
    target = 5

    print(binary_search(nums,target))