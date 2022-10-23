def binary_search_iterative(arr, target):
    L, R = 0, len(arr)-1
    while L<=R:
        M = (L+R)//2
        if arr[M] == target:
            return M
        elif arr[M] < target:
            L = M+1
        else:
            R = M-1
    return -1

def binary_search_recursive(arr, L, R, target):
    M = (L+R)//2
    if L > R:
        return -1
    if arr[M] == target:
        return M
    elif arr[M] < target:
        return binary_search_recursive(arr, M+1, R, target)
    else:
        return binary_search_recursive(arr, L, M-1, target)

arr = [1, 4, 6, 7, 8, 9, 13, 16, 17, 19]
target = 19
print(binary_search_iterative(arr, target))
print(binary_search_recursive(arr, 0, len(arr) - 1, target))