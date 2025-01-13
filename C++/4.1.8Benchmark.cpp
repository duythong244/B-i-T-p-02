#include <iostream>
#include <vector>
#include <chrono> // Thư viện để đo thời gian
using namespace std;

// Hàm Insertion Sort
void insertionSort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 1; i < n; ++i) {
        int key = arr[i];
        int j = i - 1;
        // Di chuyển các phần tử lớn hơn key sang phải
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        // Chèn key vào vị trí đúng
        arr[j + 1] = key;
    }
}

int main() {
    vector<int> arr = {5, 2, 9, 1, 5};
    
    auto start = chrono::high_resolution_clock::now(); // Bắt đầu đo thời gian
    insertionSort(arr);
    auto end = chrono::high_resolution_clock::now();   // Kết thúc đo thời gian

    cout << "Kết quả sau Insertion Sort: ";
    for (int x : arr) {
        cout << x << " ";
    }
    cout << endl;

    // Tính toán thời gian đã trôi qua
    chrono::duration<double, milli> duration = end - start;
    cout << "Thời gian thực thi: " << duration.count() << " ms" << endl;

    return 0;
}