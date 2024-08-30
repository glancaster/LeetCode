from typing import List 

def twoSum( nums: List[int], target: int) -> List[int]:
    i = 0
    j = 1
    lennums = len(nums)
    while nums[i] + nums[j] != target:
        j+=1
        if j >= lennums:
            i += 1
            if i >= lennums:
                break
            j = i + 1
    return [i,j]


def test_twoSum():
    assert twoSum([2,7,11,15], 9) == [0,1]
    assert twoSum([3,2,4], 6) == [1,2]
    assert twoSum([3,3], 6) == [0,1]
