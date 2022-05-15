// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
	public:
		string FirstNonRepeating(string str){
		    unordered_set<char>s;
		    list<char>list;
		    string ans="";
		    int n=str.size();
		    
		    for(int i=0;i<n;i++){
		        if(s.find(str[i])!=s.end()){
		            list.remove(str[i]);
		            if(list.size()>0)
		                ans+=list.front();
		            else
		                ans+='#';
		        }
		        else{
		            list.push_back(str[i]);
		            s.insert(str[i]);
		            ans+=list.front();
		        }
		    }
		    
		    return ans;
		}

};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string A;
		cin >> A;
		Solution obj;
		string ans = obj.FirstNonRepeating(A);
		cout << ans << "\n";
	}
	return 0;
}  // } Driver Code Ends
