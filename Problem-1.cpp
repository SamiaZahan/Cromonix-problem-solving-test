#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    vector<int> twoSum(vector<int> nums, int target) {
        vector<int>tmp;
        for(int i = 0; i < nums.size()-1; i++){
            for(int j = i+1; j < nums.size(); j++){
                if(nums[i] + nums[j] == target){
                    tmp.push_back(i);
                    tmp.push_back(j);
                    return tmp;
                }
            }
        }
       return tmp; 
    }
};
int main() {
 
 Solution s;
 vector<int>tmp;
 tmp = s.twoSum({2, 3,4},6);
 cout << "[";
 for(int i = 0; i < tmp.size(); i++){
     cout << tmp[i];
     if(tmp.size()-1 != i)cout << ",";
 }
 cout << "]" << endl;
 return 0;
}

	
