#include<stdio.h>
#include <limits.h>

#define MAX 100
void Matran(int A[MAX][MAX], int* n){
	scanf("%d", n);
	printf("\n");
	if (*n <= 0 || *n > MAX){
        printf("Cap ma tran khong hop le.\n");
    return;
    }
	for(int i=0; i<*n; i++){
		for(int j=0; j<*n; j++){
			scanf("%d", &A[i][j]);
		}
	}
	printf("\n");
}

void xuatMatran(int A[MAX][MAX], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d\t", A[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

int TimMAX(int A[MAX][MAX], int n, int hang){
	int max = INT_MIN;
	for(int j=0; j<n; j++){
		if(A[hang][j] > max){
			max = A[hang][j];
		}
	}
	return max;
}

int SUMDuongCheoPhu(int A[MAX][MAX], int n){
	int sum = 0;
	for(int i=0; i<n; i++){
		int max = TimMAX(A, n, i);
		A[i][n-1-i] = max;
		sum += max;
	}
	return sum;
}

int main(){
	int A[MAX][MAX], n;
    Matran(A, &n);
    xuatMatran(A, n);
    int SUM = SUMDuongCheoPhu(A, n);
    xuatMatran(A, n);
    printf("%d\n", SUM);
return 0;
}
