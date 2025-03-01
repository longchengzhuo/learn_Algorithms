#include "SortableVector.h"

class bubble_sort:public SortableVector {
    public:
    explicit bubble_sort(std::vector <int> && vec):SortableVector(vec) {}
    void sort() {
        print_unsort();
        int len = data_.size();
        for (int i = 0; i < len - 1; i++) {
            int sorted = 1;
            for (int j = len - 1; j > i; j--) {
                if (data_[j] < data_[j - 1]) {
                    std::swap(data_[j], data_[j - 1]);
                    sorted = 0;
                }
            }
            if (sorted == 1) {
                break;
            }
        }
        print_aftersort();
    }
};

int main() {
    bubble_sort v({11,15,12,4,5,6,7,8,9});
    v.sort();

    return 0;
}