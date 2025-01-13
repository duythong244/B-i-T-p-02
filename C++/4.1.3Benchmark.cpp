#include <iostream>
#include <chrono> // Thư viện để đo thời gian
using namespace std;

int sum_1_to_n(int n) {
    int s = 0;
    for (int i = 1; i <= n; i++) {
        s += i;
    }
    return s;
}

int main() {
    cout << "Nhập n: ";
    int n;
    cin >> n;

    auto start = chrono::high_resolution_clock::now(); // Bắt đầu đo thời gian
    int result = sum_1_to_n(n);
    auto end = chrono::high_resolution_clock::now(); // Kết thúc đo thời gian

    // Tính toán thời gian đã trôi qua
    chrono::duration<double> elapsed = end - start;
    cout << "Tổng 1..n = " << result << endl;
    cout << "Thời gian thực thi: " << elapsed.count() << " giây" << endl;

    return 0;
}