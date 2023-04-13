//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int finLength(int n, vector<int> c, vector<int> r) {
        stack<pair<int, int>> st;
        for(int i=0; i< n; i++){
            //if equla then pop
            if(!st.empty()){
                auto k=st.top();
                int f=k.first;
                int s=k.second;
                if(f==c[i] && s==r[i]) st.pop();
                else
                st.push({c[i], r[i]});
            }
            else{
                st.push({c[i], r[i]});
            }
        }
        return st.size();
    }
};


//{ Driver Code Starts.
int main() {

    int tt;
    cin >> tt;
    Solution sol;
    while (tt--) {

        int n;
        cin >> n;
        vector<int> color(n), radius(n);
        for (int i = 0; i < n; i++) cin >> color[i];
        for (int i = 0; i < n; i++) cin >> radius[i];
        int ans = sol.finLength(n, color, radius);
        cout << ans << "\n";
    }

    return 0;
}

// } Driver Code Ends