#include <stdio.h>
void nhap(int a[], int n) {
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
}
void xuat(int a[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}
void xoaAm(int a[], int *n) {
    int j = 0;  
    for (int i = 0; i < *n; i++) {
        if (a[i] >= 0) {  
            a[j++] = a[i]; 
        }
    }
    *n = j;  
}

int main() {
    int n, a[1000]; 
    scanf("%d", &n);
    nhap(a, n);
    xuat(a, n);
    xoaAm(a, &n);
    xuat(a, n);
    return 0;
} 
