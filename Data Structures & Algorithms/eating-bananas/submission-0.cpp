class Solution {
public:
long long totalHours(vector<int>& piles,int k){
    int hours = 0;
    for(int pile:piles){
        hours += ceil((double)pile/k);
    }
    return hours;
}
    int minEatingSpeed(vector<int>& piles, int h) {
        int left = 1;
        int right = 0;
        for(int pile:piles){
            right = max(right,pile);
        }
        int ans = right;
        while(left<=right){
            int mid = left + (right-left)/2;
            int hours = totalHours(piles,mid);
            if(hours<=h){
                ans = mid;
                right = mid-1;
            }else{
                left = mid+1;
            }
        }
        return ans;
    }
};
