#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>

void findMinSquares(int n) {
    int *dp = (int *)malloc((n + 1) * sizeof(int));
    int *squares = (int *)malloc((n + 1) * sizeof(int));

    if (!dp || !squares) {
        printf("Khong du bo nho!\n");
        return;
    }
    dp[0] = 0;
    for (int i = 1; i <= n; i++) {
        dp[i] = INT_MAX;
        for (int j = 1; j * j <= i; j++) {
            if (dp[i] > dp[i - j * j] + 1) {
                dp[i] = dp[i - j * j] + 1;
                squares[i] = j; 
            }
        }
    }
    int temp = n;
    int count = 0;
    int result[100]; 

    while (temp > 0) {
        result[count++] = squares[temp];
        temp -= squares[temp] * squares[temp];
    }
    for (int i = count - 1; i >= 0; i--) {
        printf("%d^2", result[i]);
        if (i > 0) printf(" + ");
    }
    printf("\n");
    free(dp);
    free(squares);
}

int main() {
    int n;
    scanf("%d", &n);
    if (n < 0 || n > 7000000) {
        printf("So khong hop le.\n");
        return 1;
    }
    findMinSquares(n);
    return 0;
}
