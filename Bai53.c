#include <stdio.h>
#include <stdlib.h>
void Init(int *A, int *n)
{
	scanf("%d",n);
	A[0]=1;
}
void mul2(int *A, int n, int *size)
{
	if(n==0) return;
	int tmp=0;
	for(int i=0; i<*size; i++)
	{
		tmp+=A[i]*2;
		A[i]=tmp%10;
		tmp/=10;
	}
	while(tmp>0)
	{
		A[*size]=tmp%10;
		tmp/=10;
		(*size)++;
	}
	mul2(A, n-1, size);
}
void Print(int *A, int *size)
{
	for (int i=*size-1; i>=0; i--) printf("%d",A[i]);
}
int main()
{
    int size=1, n, A[1000];
	Init(A, &n);
	mul2(A, n, &size);
	Print(A, &size);
}
