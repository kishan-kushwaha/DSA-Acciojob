
// Method -4 using dynamic programming
// Time Complexity: O(max(a,b))
// Auxiliary Space: O(1)


int gcd(int a, int b)
{
    // Everything divides 0
    if (a == 0)
        return b;
    if (b == 0)
        return a;
 
    // base case
    if (a == b)
        return a;
     
    // if a value is already
    // present in dp
    int dp[a][b];
    if(dp[a][b] != -1)
        return dp[a][b];
 
    // a is greater
    if (a > b)
        dp[a][b] = gcd(a-b, b);
     
    // b is greater
    else
        dp[a][b] = gcd(a, b-a);
     
    // return dp
    return dp[a][b];
}
 



