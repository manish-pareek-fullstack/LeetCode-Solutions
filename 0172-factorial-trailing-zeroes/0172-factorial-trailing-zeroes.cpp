class Solution {
public:

    long long factorial(int n){
        long long fact = 1;
        for(int i=1;i<=n;i++){
            fact = fact * i;
        }
        return fact;
    }

    int trailingZeroes(int n) {
        long long fact = factorial(n);
        int count = 0;

        while(fact % 10 == 0){
            count++;
            fact = fact / 10;
        }

        return count;
    }
};