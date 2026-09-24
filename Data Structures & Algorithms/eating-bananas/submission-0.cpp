class Solution {
public:
    bool calc(int mid, int h,vector<int>piles){
        long long count=0;
        for(int i =0;i<piles.size();i++){
            int temp = ceil((double)piles[i]/(double)mid);
            count = count + temp;
        }
        return count<=h;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int size = piles.size(),maximum = INT_MIN;
        for(int i =0;i<size;i++){
            if(piles[i]>maximum){
                maximum = piles[i];
            }
        }

    int low =1 ,high = maximum;
    int result;
    while(low<=high){
        int mid = low + (high-low)/2;
        if(calc(mid,h,piles)){
            result = mid;
            high = mid-1;
        }else{
            low =mid+1;
        }
    }
    return result;
    }
};
