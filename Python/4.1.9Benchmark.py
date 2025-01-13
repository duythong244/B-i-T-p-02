import time
import random

def merge(arr, left, mid, right):
    global merge_count
    n1 = mid - left + 1
    n2 = right - mid
    L = arr[left:left + n1]
    R = arr[mid + 1:mid + 1 + n2]
    
    i = j = 0
    k = left
    while i < n1 and j < n2:
        merge_count += 1  # Đếm số lần so sánh
        if L[i] <= R[j]:
            arr[k] = L[i]
            i += 1
        else:
            arr[k] = R[j]
            j += 1
        k += 1

    while i < n1:
        arr[k] = L[i]
        i += 1
        k += 1
    while j < n2:
        arr[k] = R[j]
        j += 1
        k += 1

def merge_sort(arr, left, right):
    if left < right:
        mid = left + (right - left) // 2
        merge_sort(arr, left, mid)
        merge_sort(arr, mid + 1, right)
        merge(arr, left, mid, right)

if __name__ == "__main__":
    sizes = [5000, 10000, 20000]  # Kích thước khác nhau để thử nghiệm
    for size in sizes:
        arr = [random.randint(0, 10000) for _ in range(size)]
        
        global merge_count  # Đặt lại biến đếm trước mỗi lần thử nghiệm
        merge_count = 0
        
        start_time = time.time()  # Bắt đầu đo thời gian
        merge_sort(arr, 0, len(arr) - 1)
        end_time = time.time()    # Kết thúc đo thời gian
        
        print(f"Kết quả sau Merge Sort với kích thước {size}: {arr[:10]}...")  # Chỉ in 10 phần tử đầu
        print(f"Số lần so sánh trong Merge Sort: {merge_count}")
        print(f"Thời gian thực thi: {(end_time - start_time) * 1000:.2f} ms\n")  # Chuyển đổi sang ms