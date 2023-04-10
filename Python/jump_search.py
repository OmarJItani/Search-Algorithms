def jump_search(nums, target, step):

    """
    Performs jump search on a sorted input array to find the index of a target value.
    If the target value is not found, returns -1.

    Input:
    nums: Sorted input array
    target: Target value searching for its index
    step: Step size of the required jump

    Output:
    mid: index of "target" in "nums". If "nums" does not contain "target", mid=-1
    """
    
    # Check if the array is sorted
    n = len(nums)
    if not all(nums[i] <= nums[i+1] for i in range(n-1)):
        raise ValueError("Input array must be sorted in ascending order")
    
    # Find the block to search
    prev = 0
    curr = step
    while curr < n and nums[curr] <= target:
        prev = curr
        curr += step
    
    # Linear search within the block
    for i in range(prev, min(curr, n)):
        if nums[i] == target:
            return i
        
    # Target not found
    return -1


if __name__ == "__main__":
    nums = [-1,0,1,2,2,4,5]
    target = 5
    step = 2

    print(jump_search(nums,target,step))
