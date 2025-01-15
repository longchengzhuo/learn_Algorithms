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
    // ��ʼ������
    std::vector<int> arr = {31, 41, 59, 26, 41, 58};

    // ��ӡԭʼ����
    std::cout << "Original array: ";
    for (int num : arr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // ���÷ǵ�����������
    insertionSortDecreasing(arr);

    // ��ӡ����������
    std::cout << "Sorted array (non-increasing order): ";
    for (int num : arr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}