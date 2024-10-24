#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    long long max = 0;
    long long current;


    for (int i = 0; i < N; i++) {
        scanf("%lld", &current);
        if (current > max) {
            max = current;
        }
    }

    printf("%lld\n", max);
    return 0;
}

