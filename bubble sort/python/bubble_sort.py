def bubble_sort(arr, n):
    for i in range(n):
        swapped = False
        print(i+1, 'pass')
        for j in range(n-i-1):
            if arr[j] > arr[j+1]:
                arr[j], arr[j+1] = arr[j+1], arr[j]
                swapped = True
        if not swapped:
            break

n = 5
arr = [5, 1, 4, 2, 8]
bubble_sort(arr, n)
print(arr)
