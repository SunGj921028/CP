//uva10229
#include <stdio.h>

unsigned long long matrix[2][2] = {{1, 1}, {1, 0}};

void multiply(unsigned long long F[2][2], unsigned long long M[2][2], int m) {
    unsigned long long x =  (F[0][0] * M[0][0] + F[0][1] * M[1][0]) % (1ULL << m);
    unsigned long long y =  (F[0][0] * M[0][1] + F[0][1] * M[1][1]) % (1ULL << m);
    unsigned long long z =  (F[1][0] * M[0][0] + F[1][1] * M[1][0]) % (1ULL << m);
    unsigned long long w =  (F[1][0] * M[0][1] + F[1][1] * M[1][1]) % (1ULL << m);

    F[0][0] = x;
    F[0][1] = y;
    F[1][0] = z;
    F[1][1] = w;
}

void power(unsigned long long F[2][2], unsigned long long n, int m) {
    if (n == 0 || n == 1) return;
    unsigned long long M[2][2] = {{1, 1}, {1, 0}};

    power(F, n / 2, m);
    multiply(F, F, m);

    if (n % 2 != 0) multiply(F, M, m);
}

unsigned long long fibonacciModM(unsigned long long n, int m) {
    unsigned long long F[2][2] = {{1, 1}, {1, 0}};
    if (n == 0) return 0;
    power(F, n - 1, m);
    return F[0][0] % (1ULL << m);
}

int main() {
    unsigned long long n;
    int m;
    while (scanf("%llu %d", &n, &m) != EOF) {
        printf("%llu\n", fibonacciModM(n, m));
    }
    return 0;
}