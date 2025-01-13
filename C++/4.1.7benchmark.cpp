#include <iostream>
#include <vector>
#include <chrono> // Thư viện để đo thời gian
using namespace std;

// Hàm Bubble Sort
void bubbleSort(vector<int>& arr) {
    int n = arr.size();
    bool swapped;
    for (int i = 0; i < n - 1; i++) {
        swapped = false;
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Hoán đổi
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = true;
            }
        }
        // Nếu không có hoán đổi nào, mảng đã sắp xếp
        if (!swapped) {
            break;
        }
    }
}

int main() {
    vector<int> arr = {5, 2, 9, 1, 5};
    
    cout << "Trước khi sắp xếp: ";
    for (int x : arr) {
        cout << x << " ";
    }
    cout << endl;

    auto start = chrono::high_resolution_clock::now(); // Bắt đầu đo thời gian
    bubbleSort(arr);
    auto end = chrono::high_resolution_clock::now();   // Kết thúc đo thời gian

    cout << "Sau khi sắp xếp: ";
    for (int x : arr) {
        cout << x << " ";
    }
    cout << endl;

    // Tính toán thời gian đã trôi qua
    chrono::duration<double, milli> duration = end - start;
    cout << "Thời gian thực thi: " << duration.count() << " ms" << endl;

    return 0;
}