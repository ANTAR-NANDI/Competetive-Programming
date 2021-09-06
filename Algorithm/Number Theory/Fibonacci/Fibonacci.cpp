#include <stdio.h>
int main() {
    long long int i, n, t1 = 0, t2 = 1, nextTerm;
    scanf("%lld", &n);
   

    for (i = 1; i <= n; ++i) {
        printf("%lld, ", t1);
        nextTerm = t1 + t2;
        t1 = t2;//0=1
        t2 = nextTerm;//1=1
    }

    return 0;
}
