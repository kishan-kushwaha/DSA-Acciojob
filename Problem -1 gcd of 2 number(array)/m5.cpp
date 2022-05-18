// Method -5 Using modulo operator 

// Time Complexity: O(log(max(a,b))
// Auxiliary Space: O(log(max(a,b))
 
 
int gcd(int a, int b)
{
    return b == 0 ? a : gcd(b, a % b);   
}
  
