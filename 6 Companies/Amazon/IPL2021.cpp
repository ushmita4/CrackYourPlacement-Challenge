#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution {
  public:
    vector<int> max_of_subarrays(vector<int> arr, int n, int k) {
        // your code here
        priority_queue<pair<int,int>> p;
        for(int i=0;i<k;i++){
            p.push({arr[i],i});
        }
        vector<int> ans;
        ans.push_back(p.top().first);
        for(int i=k;i<arr.size();i++){
            p.push({arr[i],i});
            while(p.top().second<=(i-k)){
                p.pop();
            }
            ans.push_back(p.top().first);
        }
        return ans;
    }
};

// { Driver Code Starts.

int main() {

    int t;
    cin >> t;

    while (t--) {

        int n, k;
        cin >> n >> k;

        vector<int> arr(n);
        for (int i = 0; i < n; i++) cin >> arr[i];
        Solution ob;
        vector<int> res = ob.max_of_subarrays(arr, n, k);
        for (int i = 0; i < res.size(); i++) cout << res[i] << " ";
        cout << endl;
    }

    return 0;
}  // } Driver Code Ends
