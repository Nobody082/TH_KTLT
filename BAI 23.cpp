#include<stdio.h>
#include<conio.h>
double luythua(double a, int n){
	double result = 1.0;
	for (int i=0; i<n; i++){
		result *= a;
	}
	return result;
}

double tich(double a, int n){
	double result = 1.0;
	for (int i=0; i<n; i++){
		result *= (a + i);
	}
	return result;
}

double tong(double a, int n){
	double tich = 1.0;
	double result = 0;
	for (int i=0; i<n; i++){
		tich *= 1/(a + i);
		result += tich;
	}
	return result;
}
int main(){
	double a;
	int n;
	scanf("%lf", &a);
	scanf("%d", &n);
	double resulta = luythua(a, n);
	printf("%.0lf\n", resulta);
	double resultb = tich(a, n);
	printf("%.0lf\n", resultb);
	double resultc = tong(a, n);
	printf("%.3lf", resultc);
return 0;
}
