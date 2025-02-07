#include <iostream>
#include <vector>
#include <chrono>

using namespace std;

class my_vector{
public:
	explicit my_vector(vector<int> && vec):v(vec) {
		print();
	};

	void advanced_bubble_sort(){
		for (int i = 0; i < len - 1; i++){
			bool sorted = true;
			for (int j = 0; j < len - i - 1; j++) {
				if (v[j] < v[j+1]) {
					swap(j+1);
					sorted = false;
				}
			}
			if (sorted == true){
				cout << "after short time ";
				print();
				exit(0);
			}
		}
		cout << "after long time ";
		print();
	}


private:
    void print(){
		cout << "vector:";
      	for (int num : v) {
			cout << num << " ";
		}
		cout << endl;
    }

	void swap(int &&i) {
      	int temp = v[i];
      	v[i] = v[i - 1];
      	v[i - 1] = temp;
    }

	vector<int> v;
	int len = static_cast<int>(v.size());


};

int main(){
  my_vector v({8,7,1,2,3,4,5,6});
  v.advanced_bubble_sort();
  return 0;
}

