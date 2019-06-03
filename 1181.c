#include <stdio.h>

int main() {
    char t;
    int i, j, n;
    float res = 0.0, x;

    scanf("%d ", &n);
    scanf("%c", &t);

    for (i = 0; i <= 11; i++) {
        for (j = 0; j <= 11; j++) {
            scanf("%f", &x);
            if (i == n) 
                res += x;
        }
    }

    if (t == 'S') 
        printf("%.1f\n", res);
    else 
        printf("%.1f\n", res / 12);

    return 0;
}

