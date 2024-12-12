#include <stdio.h>
void Init(int *A, int *n)
{
	A[0]=1;
    scanf("%d",n);
}
void GT(int *A, int *size, int tmp, int n)
{
	for (int i=2; i<=n; i++)
    {
        for(int j=0; j<*size; j++)
        {
            int save=tmp;
            tmp+=(A[j]*i);
            A[j]=(A[j]*i+save)%10;
            tmp/=10;
        }
        while (tmp>0)
        {
            A[++(*size)-1]=tmp%10;
            tmp/=10;
        }
    }
}
void Print(int A[], int size)
{
	for(int i=size-1; i>=0;i--) printf("%d",A[i]);
}
int main()
{
    int A[100000],n,size=1;
    Init(A, &n);
    GT(A, &size, 0, n);
    Print(A, size);
}
