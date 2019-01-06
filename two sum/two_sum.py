def twoSum(nums, target):
    """
    :type nums: List[int]
    :type target: int
    :rtype: List[int]
    """
    a = {}
    for i, num in enumerate(nums):
        if target - num in a:
            return [a[target - num], i]
        else:
            a[num] = i

nums = [2, 7, 11, 15]
target = 9
print(nums)
print(list(enumerate(nums)))
print(twoSum(nums,target))