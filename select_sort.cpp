#include "SortableVector.h"


class select_sort:public SortableVector {
public:
    explicit select_sort(std::vector<int> &&vec): SortableVector(vec) {}
    void sort() override{
        const int len = static_cast<int>(data_.size());
        print_unsort();
        for (int i = 0; i < (len - 1); i++) {
            int maxindex = i;
            for (int j = i + 1; j < len; j++) {
                if (data_[j] > data_[maxindex]) {
                    maxindex = j;
                }
            }
            int temp = data_[i];
            data_[i] = data_[maxindex];
            data_[maxindex] = temp;
        }
        print_aftersort();
    }

};

int main() {
    select_sort v({2,1,3,4,10,6,7,8,9});
    v.sort();

    return 0;
}