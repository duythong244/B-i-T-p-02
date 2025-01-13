import time

def binary_search(arr, target):
    left, right = 0, len(arr) - 1
    while left <= right:
        mid = (left + right) // 2
        if arr[mid] == target:
            return mid
        elif arr[mid] < target:
            left = mid + 1
        else:
            right = mid - 1
    return -1

arr = list(range(1, 17))  # [1, 2, 3, ..., 16]

start_time = time.time()  # Bắt đầu đo thời gian
result = binary_search(arr, 10)
end_time = time.time()    # Kết thúc đo thời gian

print("Kết quả tìm kiếm:", result)  # Output: 9
print("Thời gian thực thi:", end_time - start_time, "giây")