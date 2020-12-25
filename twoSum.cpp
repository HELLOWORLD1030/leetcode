#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> final;
        for(int i=0;i<nums.size();i++){
            int temp=target-nums[i];
            for(int j=i+1;j<nums.size();j++){
                if(temp==nums[j]){
                    final.push_back(i);
                    final.push_back(j);
                }
            }
        }
        return final;
    }
};
int main() {
    auto solu=new Solution();
    vector<int> test ={2,7,11,5};
    vector<int> jj;
    jj=solu->twoSum(test,9);
    for(int i : jj){
        cout<< i <<endl;

    }
    return 0;
}
