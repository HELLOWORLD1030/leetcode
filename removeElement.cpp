//
// Created by HELLO WORLD on 2020/12/25.
//
#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int first=nums.size();
        for(int i=0;i<first;i++){
            if(nums[i]==val){
                swap(nums[i],nums[first-1]);
                i--;
                first--;
            }
        }
        return first;
    }

};
int main(){
    Solution* solu=new Solution();
    vector<int> test={0,1,2,2,3,0,4,2};
    cout<<solu->removeElement(test,2);
    cout<<endl;
    for(int i=0;i<test.size();i++){
        cout<<test[i]<<" ";
    }
}
