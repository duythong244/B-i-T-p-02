#include <iostream>
#include <vector>
#include <chrono> // Thư viện để đo thời gian
using namespace std;

// Hàm Selection Sort
void selectionSort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        // Tìm chỉ số của phần tử nhỏ nhất trong [i..n-1]
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        // Hoán đổi nếu minIndex khác i
        if (minIndex != i) {
            int temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
    }
}

int main() {
    vector<int> arr = {5, 2, 9, 1, 5};
    
    auto start = chrono::high_resolution_clock::now(); // Bắt đầu đo thời gian
    selectionSort(arr);
    auto end = chrono::high_resolution_clock::now();   // Kết thúc đo thời gian

    cout << "Kết quả sau Selection Sort: ";
    for (int x : arr) {
        cout << x << " ";
    }
    cout << endl;

    // Tính toán thời gian đã trôi qua
    chrono::duration<double, milli> duration = end - start;
    cout << "Thời gian thực thi: " << duration.count() << " ms" << endl;

    return 0;
}