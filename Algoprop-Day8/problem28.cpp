class Solution {
public:
    int divide(int dividend, int divisor) {
        if (dividend == INT32_MIN && divisor == -1){
            return INT32_MAX;
        }
        if (divisor == INT32_MIN){
            return dividend == INT32_MIN ? 1: 0;
        }
        if(divisor ==1) return dividend;

        bool isMin = false;
        if(dividend == INT32_MIN){
            isMin = true;
            dividend++;
        }

        int res = 0;
        int sign = (dividend > 0) ^ (divisor > 0) ? -1: 1;
        dividend = abs(dividend);
        divisor = abs(divisor);
        while (dividend >= divisor){
            int temp = divisor, k=1;
            while(temp << 1 > 0 && temp << 1 <= dividend){
                temp <<= 1;
                k<<=1;
            }
            dividend -= temp;
            res +=k;
        }
        if(isMin){
            dividend++;
            while(dividend>=divisor){
                res++;
                dividend -= divisor;
            }
        }
        return sign == 1 ? res : -res;
    }
};