class Solution {
public:
    int smallestNumber(int n, int t){
        while(true){
            int prod=1;
            int x=n; // keeping x = n preserves the true value of n, so when doing n++ at the end, it works
            // other wise, by using directly n, the value becomes zero
            while(x){
                prod*=(x%10);
                x/=10;
            }
            if (prod % t == 0){
                return n;
            }   
            n++;
        }
    }
};