#include<stdio.h>
#include<conio.h>
#include<math.h>

void nhap(long long n, long long matran[n][n]) {
	for(long long i=0; i<n; i++) {
		for(long long j=0; j<n; j++) {
			scanf("%lld", &matran[i][j]);
		}
	}
}

void in(long long n, long long matran[n][n]) {
	for(long long i=0; i<n; i++) {
		for(long long j=0; j<n; j++) {
			printf("%lld", matran[i][j]);
		}
	}
}

int main() {
	long long n;
	scanf("%lld", &n);
	long long A[n][n];
	nhap(n, A);
	in(n, A);
	return 0;
}
