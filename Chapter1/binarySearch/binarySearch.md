# Binary Search 

## defination
binary search is a search algorithm that relies on a divide and conquer strategy to find a value within an **already-sorted** collection or (array).
the sort order can be either ascending or descending.


## pesudo code
```
func binarySearch(array, target)
    left = 0
    right = array.length - 1
    while left <= right
        mid = (left + right) / 2
        if array[mid] == target
            return mid
        else if array[mid] < target
            left = mid + 1
        else
            right = mid - 1
```

## time complexity
O(log(n)) meaning the if we have an array with 8 elements, it will take 3 steps to find the element. log(8) = 3 (2^3 = 8)