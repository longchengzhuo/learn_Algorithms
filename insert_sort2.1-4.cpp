#include <iostream>
#include <vector>

/**
 * Consider the problem of adding two n-bit binary integers, stored in two n-element arrays A and B.
 * The sum of the two integers should be stored in binary form in an (n+1)-element array C.
 * State the problem formally and write pseudocode for adding the two integers.
 */

// 函数：将两个 n 位二进制整数相加
std::vector<int> addBinaryIntegers(const std::vector<int>& A, const std::vector<int>& B) {
    int n = A.size(); // 获取二进制整数的位数
    std::vector<int> C(n + 1, 0); // 初始化结果数组 C，长度为 n+1
    int carry = 0; // 初始化进位为 0

    // 从最低位开始遍历
    for (int i = 0; i < n; ++i) {
        int sum = A[i] + B[i] + carry; // 计算当前位的和
        C[i] = sum % 2; // 当前位的结果是 sum 对 2 取余
        carry = sum / 2; // 计算进位
    }

    C[n] = carry; // 最高位存储最终的进位
    return C; // 返回结果数组 C
}

// 主函数
int main() {
    // 示例输入
    std::vector<int> A = {1, 0, 1}; // 二进制数 101（十进制 5）
    std::vector<int> B = {1, 1, 1}; // 二进制数 111（十进制 7）

    // 调用函数计算和
    std::vector<int> C = addBinaryIntegers(A, B);

    // 输出结果
    std::cout << "结果数组 C: ";
    for (int i = C.size() - 1; i >= 0; --i) {
        std::cout << C[i];
    }
    std::cout << std::endl;

    return 0;
}