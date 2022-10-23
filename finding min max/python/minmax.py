def findminmax(arr):
    min = max = arr[0]
    for val in arr[1:]:
        if val < min:
            min = val
        if val > max:
            max = val
    return min, max

arr = [27, 6, 17, 14, 20, 16, 12, 2, 10, 13, 9, 18, 8, 7, 15, 5, 11, 13, 26, 4]
print(arr)
min, max = findminmax(arr)
print(f'Min: {min} Max: {max}')
