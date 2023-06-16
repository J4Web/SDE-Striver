//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
	int search(string pat, string txt) {
	    // code here
	    int n=txt.size();
	    int k=pat.size();
	    int ans=0;
	    vector<int> arr(26,0);
	    for(auto i=0;i<k;i++)
	    {
	        arr[pat[i]-'a']++;
	    }
	    vector<int> brr(26,0);
	    
	    for(int i=0;i<n;i++)
	    {
	        brr[txt[i]-'a']++;
	        if(i+1>=k)
	        {
	            if(arr==brr)
	            {
	                ans++;
	            }
	            brr[txt[i-k+1]-'a']--;
	        }
	    }
	    
	    return ans;
	    
	    
	}

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string pat, txt;
        cin >> txt >> pat;
        Solution ob;
        auto ans = ob.search(pat, txt);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends