#include<stdio.h>
#define MAX 100
void nhapMaTran(int a[MAX][MAX], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }
}

void xuatMaTran(int a[MAX][MAX], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}

int Min(int a[MAX][MAX], int n) {
    int tongMin = 0;
    for (int i = 0; i < n; i++) {
        int min = a[i][0];
        int minIndex = 0;

        for (int j = 1; j < n; j++) {
            if (a[i][j] < min) {
                min = a[i][j];
                minIndex = j;
            }
        }

        tongMin += min;

        int temp = a[i][n - i - 1];
        a[i][n - i - 1] = a[i][minIndex];
        a[i][minIndex] = temp;
    }
    return tongMin;
}

int main() {
	int n;
    int a[MAX][MAX];
    do {
        scanf("%d", &n);
    } while (n <= 0);
    nhapMaTran(a, n);
    xuatMaTran(a, n);
    int tongMin = Min(a, n);
    printf("\n");
    xuatMaTran(a, n);
    printf("\n%d", tongMin);

    return 0;
}
