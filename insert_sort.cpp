#include <iostream>
#include <vector>

// decreasing sort
void insertionSortDecreasing(std::vector<int> &arr) {
    for (int j = 1; j < arr.size(); j++) {
        int key = arr[j];
        int i = j - 1;
        while (i >= 0 && arr[i] < key) {
            arr[i+1] = arr[i];
            --i;
        }
        arr[i+1] = key;
    }
}

int main() {
    // 初始化数组
    std::vector<int> arr = {31, 41, 59, 26, 41, 58};

    // 打印原始数组
    std::cout << "Original array: ";
    for (int num : arr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // 调用非递增插入排序
    insertionSortDecreasing(arr);

    // 打印排序后的数组
    std::cout << "Sorted array (non-increasing order): ";
    for (int num : arr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}