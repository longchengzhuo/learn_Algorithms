#include <iostream>
#include <vector>

/**
 * Consider the problem of adding two n-bit binary integers, stored in two n-element arrays A and B.
 * The sum of the two integers should be stored in binary form in an (n+1)-element array C.
 * State the problem formally and write pseudocode for adding the two integers.
 */

// ������������ n λ�������������
std::vector<int> addBinaryIntegers(const std::vector<int>& A, const std::vector<int>& B) {
    int n = A.size(); // ��ȡ������������λ��
    std::vector<int> C(n + 1, 0); // ��ʼ��������� C������Ϊ n+1
    int carry = 0; // ��ʼ����λΪ 0

    // �����λ��ʼ����
    for (int i = 0; i < n; ++i) {
        int sum = A[i] + B[i] + carry; // ���㵱ǰλ�ĺ�
        C[i] = sum % 2; // ��ǰλ�Ľ���� sum �� 2 ȡ��
        carry = sum / 2; // �����λ
    }

    C[n] = carry; // ���λ�洢���յĽ�λ
    return C; // ���ؽ������ C
}

// ������
int main() {
    // ʾ������
    std::vector<int> A = {1, 0, 1}; // �������� 101��ʮ���� 5��
    std::vector<int> B = {1, 1, 1}; // �������� 111��ʮ���� 7��

    // ���ú��������
    std::vector<int> C = addBinaryIntegers(A, B);

    // ������
    std::cout << "������� C: ";
    for (int i = C.size() - 1; i >= 0; --i) {
        std::cout << C[i];
    }
    std::cout << std::endl;

    return 0;
}