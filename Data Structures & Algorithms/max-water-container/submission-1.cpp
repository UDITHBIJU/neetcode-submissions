class Solution {
public:
    int maxArea(vector<int>& heights) {
        int start =0,end = heights.size()-1;
        int product =INT_MIN;
        while(start<end){
            int temp = (end-start)*min(heights[start],heights[end]);
            product = max(product,temp);
            if(heights[start]<heights[end]){
                start++;
            }else{
                end--;
            }
        }
        return product;
    }
};
