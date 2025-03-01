#include "SortableVector.h"

class insert_sort:public SortableVector {
    public:
        explicit insert_sort(std::vector<int> &&vec):SortableVector(vec) {}
        void sort() override {
            print_unsort();
            int len = data_.size();
            for (int i = 1; i < len; i++) {
                for (int j = i; j > 0; j--) {
                    if (data_[j] < data_[j - 1]) {
                        std::swap(data_[j], data_[j - 1]);
                    }
                    else {
                        break;
                    }
                }
            }
            print_aftersort();
        };
};

int main() {
    insert_sort v({11,15,12,4,5,6,7,8,9});
    v.sort();
    return 0;
}