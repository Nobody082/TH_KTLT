#include <stdio.h>
#include <math.h> 

void nhap(int A[][100], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &A[i][j]); 
        } 
    } 
}

void xuat(int A[][100], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", A[i][j]); 
        }
        printf("\n");
    }
} 

float tinhdinhthuc(int A[][100], int n) {
    float det = 0; 
    int matrancon[100][100];
    if (n == 2) {
        return ((A[0][0] * A[1][1]) - (A[1][0] * A[0][1]));
    } else {
        for (int x = 0; x < n; x++) {
            int sohangi = 0;
            for (int i = 1; i < n; i++) {
                int sohangj = 0;
                for (int j = 0; j < n; j++) {
                    if (j == x) continue; 
                    matrancon[sohangi][sohangj] = A[i][j];
                    sohangj++;
                }
                sohangi++;
            }
            det += (pow(-1, x) * A[0][x] * tinhdinhthuc(matrancon, n - 1));
        }
    }
    return det;
}

int main() {
    int n, A[100][100];
    scanf("%d", &n);
    nhap(A, n);
    xuat(A, n);
    float det = tinhdinhthuc(A, n);  
    printf("dinhthuc =  %.2f\n", det);
    return 0;}
	 
