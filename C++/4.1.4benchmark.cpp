#include <iostream>
#include <chrono> // Thư viện để đo thời gian
using namespace std;

void printNumbers(int n) {
    for (int i = 1; i <= n; i++) {
        cout << i << " ";
    }
    cout << endl;
}

int main() {
    int n = 5;

    auto start = chrono::high_resolution_clock::now(); // Bắt đầu đo thời gian
    printNumbers(n); 
    auto end = chrono::high_resolution_clock::now(); // Kết thúc đo thời gian

    // Tính toán thời gian đã trôi qua
    chrono::duration<double> elapsed = end - start;
    cout << "Thoi gian thuc thi: " << elapsed.count() << " giay" << endl;

    return 0;
}