#include <stdio.h>

void nhapMang(int A[], int *n){
    for (int i=0; i<*n; i++){
        scanf("%d", &A[i]);
    }
}

void xoaPhanTu(int A[], int *n, int k){
    if(k < 0 || k >= *n){
        printf("Chi so khong hop le!\n");
    return;
    }
    for(int i = k-1; i < *n - 2; i++){
        A[i] = A[i + 1];
    }
    (*n)--;
}

void xuatMang(int A[], int n){
    for(int i = 0; i < n; i++)
        printf("%d ", A[i]);
}

int main(){
    int n, k;
    scanf("%d", &n);
    scanf("%d", &k);
    int A[100000];
    nhapMang(A, &n);
    xoaPhanTu(A, &n, k);
    xuatMang(A,n);
    return 0;
}
