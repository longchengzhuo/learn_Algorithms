#include <utility>
#include <vector>
#include <iostream>

/**
 *选择排序花销分析：
 *比较次数多，交换次数少（每一轮最多一次）
 *上一轮不能给下一轮提供信息（没有记忆）
 */

using namespace std;

class my_vector {
  public:

    explicit my_vector(vector<int> vec): v(std::move(vec)){
      cout << "original vector:";
      for (int num : v) {
        cout << num << " ";
      }
      cout << endl;
    }

    void select_sort() {
      int len = static_cast<int>(v.size());
      for (int i = 0; i < len - 1; i++) {
        int maxindex = i;
        for (int j = i + 1; j < len; j++) {
          if (v[maxindex] < v[j]) {
             maxindex = j;
          };
        swap(i, maxindex);
        }
      }
      cout << "after sort:";
      for (int num : v) {
        cout << num << " ";
      }
      cout << endl;
    }

  private:

    void swap(int &a, int &b) {
      int temp = v[a];
      v[a] = v[b];
      v[b] = temp;
    }
    vector<int> v;
};

int main() {
  my_vector v({1,2,3,4,10,6,7,8,9});
  v.select_sort();

  return 0;
}