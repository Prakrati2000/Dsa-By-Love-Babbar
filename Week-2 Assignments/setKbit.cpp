
#include<bits/stdc++.h> 
using namespace std; 

class Solution
{
public:
    int setKthBit(int N, int K)
    {
        // Write Your Code here
        return (N|1<<K);
    }
    
};


int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N, K;
        cin >> N >> K;
        
        Solution ob;
        int ans = ob.setKthBit(N,K);
        cout << ans << endl;
    }
    return 0;
}
