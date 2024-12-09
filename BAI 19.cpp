#include<stdio.h>
#include<conio.h>
void check(float n){
	if (n > 3 && n < 5){
		printf("%.1f ", n);
	}
}
int main(){
	float x, y, z;
	scanf("%f%f%f", &x, &y, &z);
	check(x);
	check(y);
	check(z);
	return 0;
}
