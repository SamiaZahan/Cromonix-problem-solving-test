#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    vector<int> sumFunction(vector<int> nums, int target) {
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
 
 Solution sln;
 vector<int>tmp;
 vector<int> nums;
 int length,target, num;
 cout<<"Length of nums:"; cin>>length;
 cout<<"nums:";
 for(int i; i<length; i++){
     cin>>num;
    nums.push_back(num);
 };
 cout<<"target:";
 cin>>target;
    
 tmp = sln.sumFunction(nums,target);
 cout << "[";
 for(int i = 0; i < tmp.size(); i++){
     cout << tmp[i];
     if(tmp.size()-1 != i)cout << ",";
 }
 cout << "]" << endl;
 return 0;
}

	
