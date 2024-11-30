#include<stdio.h>
#include<conio.h>
#include<math.h>

void chinhphuong(long long n) {
	while(n > 0) {
		long long k = (long long)sqrt(n);
		long long s = k*k;
		printf("%d^2", k);
		n -= s;
		if(n>0) printf(" + ");
	}
	printf("\n");
}

int main() {
	long long n;
	scanf("%lld", &n);
	chinhphuong(n);
	return 0;
}
