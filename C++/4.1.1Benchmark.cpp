#include <iostream>
#include <vector>
#include <chrono> // Thư viện để đo thời gian

void merge(std::vector<int>& arr, int left_start, int mid, int right_end) {
    // Hàm merge (cần được định nghĩa)
}

void bottomUpMergeSort(std::vector<int>& arr) {
    int n = arr.size();
    for (int curr_size = 1; curr_size <= n - 1; curr_size *= 2) {
        for (int left_start = 0; left_start < n - 1; left_start += 2 * curr_size) {
            int mid = std::min(left_start + curr_size - 1, n - 1);
            int right_end = std::min(left_start + 2 * curr_size - 1, n - 1);
            merge(arr, left_start, mid, right_end);
        }
    }
}

int main() {
    std::vector<int> arr = {38, 27, 43, 3, 9, 82, 10}; // Ví dụ mảng

    auto start = std::chrono::high_resolution_clock::now(); // Bắt đầu đo thời gian
    bottomUpMergeSort(arr);
    auto end = std::chrono::high_resolution_clock::now(); // Kết thúc đo thời gian

    // Tính toán thời gian đã trôi qua
    std::chrono::duration<double> elapsed = end - start;
    std::cout << "Thời gian thực thi Benchmark : " << elapsed.count() << " giây" << std::endl;

    return 0;
}