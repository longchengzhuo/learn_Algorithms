#include <iostream>
#include <vector>
using namespace std;

class my_vector{
  public:
    explicit my_vector(vector<int> && vec):v(vec){
      print();
    }

    void insert_sort(){
      for(int i = 1; i < len; i++)
      {
        for(int j = i; j > 0; j--)
        {
          if(v[j-1] > v[j])
          {
            swap(j);
          }
          else
          {
            break;
          }
        }
      }
      cout << "after ";
      print();
    }

    void advanced_insert_sort() {
      for (int i = 1; i < len; i++) {
        int temp = v[i];
        int j;
        for (j = i; j > 0; j--) {
          if (v[j-1] > temp) {
            v[j] = v[j-1];
          }else {
            break;
          }
        }
        v[j] = temp;
      }
      cout << "after advanced sort ";
      print();
    }

  private:
    vector<int> v;
    int len = static_cast<int>(v.size());

    void swap(int &i){
      int temp = v[i];
      v[i] = v[i - 1];
      v[i - 1] = temp;
    }

    void print(){
      cout << "vector:";
      for(int number : v){
        cout << " " << number;
      }
      cout << endl;
    }

};

int main(){
  my_vector vec({8,7,6,3,4,5,2,1});
  vec.advanced_insert_sort();
  return 0;
}