class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int a,b;
        map<int,int> mp;
        for(int i=0; i<nums.size(); i++){
            mp[nums[i]]++;
            if(mp[nums[i]]>1){
                a = nums[i];
            }
        }
        for(int i=1; i<=nums.size(); i++){
            if(mp.find(i)==mp.end()){
                b = i;
                break;
            }
        }
        return {a,b};
    }
};
