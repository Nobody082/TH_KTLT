#include<stdio.h>

void nhap_mang(int A[], int *n){
    scanf("%d", &(*n));
    for (int i = 0; i < *n; i++) {
        scanf("%d", &A[i]);
    }
}

void xuat_mang(int A[], int n){ 
	for(int i=0; i<n; i++){
		printf("%d ", A[i]);
	}
}

int UCLNof2so(int a, int b) {
    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int UCLN(int A[], int n){
	int uc = A[0];
	for(int i=1; i<n; i++){
		uc = UCLNof2so(A[i],uc);
	}
	return uc;
}

long long BCNN(int A[], int n) {
    long long bcnn = A[0];
    for (int i = 1; i < n; i++) {
        bcnn = (bcnn * A[i]) / UCLNof2so(bcnn, A[i]);
    }
    return bcnn;
}

int main(){
    int A[100000], n;
    nhap_mang(A, &n);
    xuat_mang(A, n);
    printf("\n%d", UCLN(A, n));
    printf("\n%lld", BCNN(A, n));
    return 0;
}


	


