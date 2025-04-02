#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
  void moveZeroes(vector<int>& nums) {

    for (int i = 0; i < nums.size(); i++){    
      for (int j = 0; j < nums.size(); j++){

        if (nums[j] ==  0 ){
          int tmp = nums[j];
          nums[j] = nums[i];
          nums[i]= tmp;
        }

      }
    }
    cout << "[";
    for (int i = 0; i < nums.size(); i++) {
      cout << nums[i];
      if (i != nums.size() - 1) {
                cout << ",";
      }
    }
    cout << "]"<< endl; 
  }
};

int main() {
  Solution sol;
  vector<int> nums = {4,2,4,0,0,3,0,5,1,0};
  sol.moveZeroes(nums);
  return 0;

}
