class Solution {
public:
    int integerReplacement(int n) 
    {
        return helper(long(n));
    }
    int helper(long n) 
    {
        int count = 0;
        while(n > 1)
         {
            if(n % 2 == 0)
                n /= 2;
            else if(((n+1) % 4) == 0 && n+1 != 4)
                n += 1;
            else 
                n -= 1;
            ++count;
        }
        return count;
    }
};