class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>vec;
        int diff;
        unordered_map<int,int>unm;
        int size = nums.size();
        for(int i = 0;i<size;i++){
            diff = target - nums[i];
            if(unm.find(diff)!=unm.end() && unm.find(diff) ->second != i){
                vec.push_back(i);
                vec.push_back(unm.find(diff) ->second);
                return vec;
            }
        unm[nums[i]]=i;
        }
        return vec;
    }
};
