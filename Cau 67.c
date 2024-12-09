#include<stdio.h>
#include<stdlib.h>

void nhap(double a[], int n) {
	for(int i=0; i<n; i++) {
		scanf("%lf", &a[i]);
	}
}

void xuat(double a[], int n) {
	for(int i=0; i<n; i++) {
		printf("%lf ", a[i]);
	}
}

int sosanh(const void *a, const void *b) {
    double diff = (*(double*)b - *(double*)a);
    return (diff > 0) - (diff < 0); 
}

int main() {
	int n;
	scanf("%d", &n);
	double *a = (double*)malloc(n * sizeof(double));
    if (a == NULL) {
	printf("Khong du bo nho\n");
        return 1;
    }
	nhap(a, n);
	xuat(a, n);
	printf("\n");
	qsort(a, n, sizeof(double), sosanh);
	xuat(a, n);
	free(a);
	return 0;
}
