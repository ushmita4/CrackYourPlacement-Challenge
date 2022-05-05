class Solution {
public:
    int longestMountain(vector<int>& arr) {
    int n = arr.size();
    vector<int>left_inc(n, 0);
    vector<int>right_inc(n, 0);
    int ans = INT_MIN;
    
    for(int i=1;i<n;i++)
        if(arr[i] > arr[i-1])
            left_inc[i] = 1 + left_inc[i-1];
    
    for(int i=(n-2);i>=0;i--)
        if(arr[i] > arr[i+1])
            right_inc[i] = 1 + right_inc[i+1];        
    
    for(int i=0;i<n;i++)
        if(left_inc[i]>0 && right_inc[i]>0)
            ans = max(ans, (left_inc[i]+right_inc[i]));
    
    if(ans!=INT_MIN)
        return ans+1;
    else
        return 0;
    
}
};
