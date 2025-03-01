#ifndef SORTABLE_VECTOR_H
#define SORTABLE_VECTOR_H

#include <vector>
#include <iostream>
#include <algorithm>

// 父类 SortableVector，用于练习排序算法
class SortableVector {
public:
    // 构造函数：接收一个 vector 并初始化私有成员变量
    explicit SortableVector(const std::vector<int>& data) : data_(data) {}

    // 虚函数：默认排序实现，子类可重载以实现自定义排序算法
    virtual void sort() {
        std::sort(data_.begin(), data_.end());
    }

    // 虚析构函数：确保子类对象正确析构
    virtual ~SortableVector() = default;

protected:
    std::vector<int> data_; // 私有成员：存储整数的 vector 数组
    // 私有函数：打印 vector 内容，仅供类内部使用
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