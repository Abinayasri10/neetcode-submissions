class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        // int left = 0;
        // int right = numbers.size()-1;
        // while(left<right){
        //     int currsum = numbers[left] + numbers[right];
        //     if(currsum<target){
        //         left++;
        //     }else if(currsum>target){
        //         right--;
        //     }else{
        //         return {left+1,right+1};
        //     }
        // }

        unordered_map<int,int> mp;
        for(int i=0;i<numbers.size();i++){
            int diff = target - numbers[i];
            if(mp.find(diff)!=mp.end()){
                return {mp[diff],i+1};
            }
            mp[numbers[i]] = i+1;
        }
        return {};
    }
};
