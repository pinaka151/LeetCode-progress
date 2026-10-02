class Solution {
public:
    int countPrimes(int n) {
        if (n <= 2) return 0;

        int cnt = n - 2;
        vector<char> isPrime(n, 1);

        for (int i = 2; i * i < n; i++) {
            if (isPrime[i]) {
                for (int j = i * i; j < n; j += i) {
                    if (isPrime[j]) {
                        isPrime[j] = 0;
                        cnt--;
                    }
                }
            }
        }

        return cnt;
    }
};