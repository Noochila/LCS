//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
void solve(string k,int o,int z,int n,vector<string>&ans)
{
    if(n==0)
    {
        if(o>=z)
    {    ans.push_back(k);}
        return ;
    }
    
    string op1=k;
    string op2=k;
    
    op1=op1+'1';
    op2=op2+'0';
    
    solve(op1,o+1,z,n-1,ans);
    
    if(o>z)
    solve(op2,o,z+1,n-1,ans);
    
    
}
	vector<string> NBitBinary(int N)
	{
	    // Your code goes here
	    vector<string> ans;
	    
	    solve("1",1,0,N-1,ans);
	    return ans;
	    
	}
};

//{ Driver Code Starts.

int main() 
{
   	

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		int n;
   		cin >> n;
        Solution ob;
   		vector<string> ans = ob.NBitBinary(n);

   		for(auto i:ans)
   			cout << i << " ";

   		cout << "\n";
   	}

    return 0;
}
// } Driver Code Ends