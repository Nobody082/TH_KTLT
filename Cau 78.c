#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define MAX 10

void nhap(float mat[MAX][MAX], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%f", &mat[i][j]);
        }
    }
}

void xuat(float mat[MAX][MAX], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%8.2f ", mat[i][j]);
        }
        printf("\n");
    }
}

int nghichdao(float mat[MAX][MAX], float dao[MAX][MAX], int n) {
    float temp[MAX][MAX];
    int i, j, k;
    float r;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            temp[i][j] = mat[i][j];
            dao[i][j] = (i == j) ? 1 : 0;
        }
    }
    for (i = 0; i < n; i++) {
        if (temp[i][i] == 0) {
            return 0; 
        }
        for (j = 0; j < n; j++) {
            if (i != j) {
                r = temp[j][i] / temp[i][i];
                for (k = 0; k < n; k++) {
                    temp[j][k] -= r * temp[i][k];
                    dao[j][k] -= r * dao[i][k];
                }
            }
        }
    }
    for (i = 0; i < n; i++) {
        float diag = temp[i][i];
        for (j = 0; j < n; j++) {
            temp[i][j] /= diag;
            dao[i][j] /= diag;
        }
    }
    return 1;
}

int main() {
    float mat[MAX][MAX], dao[MAX][MAX];
    int n;
    scanf("%d", &n);
    nhap(mat, n);
    xuat(mat, n);
    printf("\n");
    if (nghichdao(mat, dao, n)) {
        xuat(dao, n);
    } else {
        printf("Ma tran khong kha nghich.");
    }

    return 0;
}

