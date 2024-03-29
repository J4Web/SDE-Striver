//{ Driver Code Starts //
#include <bits/stdc++.h>
using namespace std;
class Solution{
public:	
	int matSearch (vector <vector <int>> &mat, int N, int M, int X)
	{
	    // your code here
	    int l=0;
	    int r=M-1;
	    while(l<N and r>=0)
	    {
	        if(mat[l][r]==X) return 1;
	        else if(mat[l][r]>X) r--;
	        else l++;
	    }
	    return 0;
	}
};

//{ Driver Code Starts.

int main ()
{
    int t; cin >> t;
    while (t--){
        int n, m; cin >> n >> m;
        vector <vector <int>> arr (n, vector <int> (m));
        for (int i=0;i<n;i++)
            for (int j=0;j<m;j++)
                cin >> arr[i][j];
                
        int x; cin >> x;
        Solution ob;
        cout << ob.matSearch (arr, n, m, x) << endl;
    }
}
// } Driver Code Ends
