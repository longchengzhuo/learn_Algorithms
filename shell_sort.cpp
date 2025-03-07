#include "SortableVector.h"

class shell_sort:public SortableVector {
  public:
    explicit shell_sort(std::vector<int> &&vec):SortableVector(vec) {}
    void sort() override {
      print_unsort();
      const int len = static_cast<int>(data_.size());
      int h = 1;
      while (h < (len / 2)) {
        h = h * 2;
      }

      while (h >= 1) {
        int sorted_index = h;
        insert_sort(sorted_index, h);
        h = h / 2;
      }

      print_aftersort();
    }
  private:
    void insert_sort(int &sorted_index, int &h) {
      for (sorted_index; sorted_index < data_.size(); sorted_index++) {
        for (int j = sorted_index; j - h >= 0; j = j - h) {
          if (data_[j] > data_[j - h]) {
            std::swap(data_[j], data_[j - h]);
          }else {
            break;
          }
        }
      }
    }
};
int main(){
  shell_sort v({1,2,3,4,5,6,7,8,9,10});
  v.sort();
  return 0;
}