class Solution {
public:
    int search(vector<int>& arr, int target) {
        int left = 0;
        int right = arr.size()-1;
        for(int i=0;i<arr.size();i++){
            int mid = (left+right)/2;
            if(arr[mid]==target){
                return mid;
            }else if(arr[mid]<target){
                left++;
            }else{
                right--;
            }
        }
        return -1;
    }
};
