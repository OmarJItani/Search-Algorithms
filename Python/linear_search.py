def linear_search(nums,target):

    """
    Performs linear search on an input array to find the index of a target value.
    If the target value is not found, returns -1.

    Input:
    nums: Input array
    target: Target value searching for its index

    Output:
    index: index of "target" in "nums". If "nums" does not contain "target", index=-1
    """
       
    # iterate sequentially over "nums" searching for "target"
    for index,elem in enumerate(nums):
        if elem == target:
            return index
    
    return -1


if __name__ == "__main__":
    nums = [-1,0,1,3,4]
    target = 0

    print(linear_search(nums,target))
