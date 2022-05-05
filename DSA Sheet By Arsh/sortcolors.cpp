class Solution {
public:
    void sortColors(vector<int>& nums) {
        int r=0,w=0,b=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0)
                r++;
            if(nums[i]==1)
                w++;
            if(nums[i]==2)
                b++;
        }
        for(int s=0;s<r;s++)
            nums[s]=0;
        for(int s=r;s<r+w;s++)
            nums[s]=1;
        for(int s=r+w;s<r+w+b;s++)
            nums[s]=2;
        
    }
};
