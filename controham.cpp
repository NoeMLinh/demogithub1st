#include<iostream>
using namespace std;
void swapNumber(int &a, int &b);
void selectionSort(int *arr, int n, bool(*comparisonFcn)(int, int));
bool asc(int a, int b);
bool desc(int a, int b);

int main() {

}

// hoán đổi giá trị hai số
void swapNumber(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void selectionSort(int *arr, int n, bool(*comparisonFcn)(int, int)) {
    int i, j, find_idx;
    for (i = 0; i < n - 1; i++) {
    //Tìm phần tử lớn nhất/nhỏ nhất chưa được sắp xếp
    find_idx = i;
    for (j = i + 1; j < n; j++) {
        if (comparisonFcn(arr[find_idx], arr[j])) {
            find_idx = j;
        }
    }
    // Đổi chỗ phần tử tìm được với phần tử đầu tiên
    swapNumber(arr[find_idx], arr[i]);
    }
}

bool asc(int a, int b) {
    return a > b;
}
bool desc(int a, int b) {
    return a < b;
}
