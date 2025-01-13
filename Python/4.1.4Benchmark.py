import time

def bubble_sort(arr):
    n = len(arr)
    for i in range(n):
        swapped = False
        for j in range(n - 1 - i):
            # Hoán đổi
            if arr[j] > arr[j + 1]:
                arr[j], arr[j + 1] = arr[j + 1], arr[j]
                swapped = True
        # Nếu không có hoán đổi nào, mảng đã được sắp xếp
        if not swapped:
            break

if __name__ == "__main__":
    arr = [5, 2, 9, 1, 5]

    start_time = time.time()  # Bắt đầu đo thời gian
    bubble_sort(arr)
    end_time = time.time()    # Kết thúc đo thời gian

    print("Kết quả sau Bubble Sort:", arr)
    print("Thời gian thực thi:", end_time - start_time, "giây")