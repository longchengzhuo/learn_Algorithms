#ifndef SORTABLE_VECTOR_H
#define SORTABLE_VECTOR_H

#include <vector>
#include <iostream>
#include <algorithm>

// ���� SortableVector��������ϰ�����㷨
class SortableVector {
public:
    // ���캯��������һ�� vector ����ʼ��˽�г�Ա����
    explicit SortableVector(const std::vector<int>& data) : data_(data) {}

    // �麯����Ĭ������ʵ�֣������������ʵ���Զ��������㷨
    virtual void sort() {
        std::sort(data_.begin(), data_.end());
    }

    // ������������ȷ�����������ȷ����
    virtual ~SortableVector() = default;

protected:
    std::vector<int> data_; // ˽�г�Ա���洢������ vector ����
    // ˽�к�������ӡ vector ���ݣ��������ڲ�ʹ��
    void print_unsort() const {
        std::cout << "before sort:";
        for (const auto& elem : data_) {
            std::cout << elem << " ";
        }
        std::cout << std::endl;
    }
    void print_aftersort() const {
        std::cout << "after sort:";
        for (const int& elem : data_) {
            std::cout << elem << " ";
        }
        std::cout << std::endl;
    }
};

#endif // SORTABLE_VECTOR_H