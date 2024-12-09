#include <stdio.h>
int A[100000],n,tmp=0,size=1;
void Init()
{
	A[1]=1;
    scanf("%d",&n);
}
void GT()
{
	for (int i=2; i<=n; i++)
    {
        for(int j=1; j<=size; j++)
        {
            int save=tmp;
            tmp+=(A[j]*i);
            A[j]=(A[j]*i+save)%10;
            tmp/=10;
        }
        while (tmp>0)
        {
            A[++size]=tmp%10;
            tmp/=10;
        }
    }
}
void Print()
{
	for(int i=size; i>=1;i--) printf("%d",A[i]);
}
int main()
{
   Init();
   GT();
   Print();
}
