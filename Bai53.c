#include <stdio.h>
#include <stdlib.h>
int size=1,n; 
int A[1000];
void Init()
{
	scanf("%d",&n);
	A[0]=1;
}
void mul2(int n)
{
	if(n==0) return;
	int tmp=0;
	for(int i=0; i<size; i++)
	{
		tmp+=A[i]*2;
		A[i]=tmp%10;
		tmp/=10;
	}
	while(tmp>0)
	{
		A[size]=tmp%10;
		tmp/=10;
		size++;
	}
	mul2(n-1);
}
void Print()
{
	for (int i=size-1; i>=0; i--) printf("%d",A[i]);
}
int main()
{
	Init();
	mul2(n);
	Print();
}
