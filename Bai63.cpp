#include <stdio.h>
#include <math.h>
#include <stdbool.h>
bool check(long long n)
{
	long long t;
	t=sqrt(n);
	return t*t==n;
}
void nhapmang(long long *a, long long n)
{
for (long long i=0;i<n;i++)
	{
		scanf("%lld",&a[i]);
	}	
}
void inmang(long long *a, long long n)
{
for (long long i=0;i<n;i++)
	{
		printf("%lld ",a[i]);
		
	}printf("\n");	
}
void chinhphuong(long long *a, long long n)
{
	long long s=0;
		  for (long long i=0;i<n;i++)
    {
    	if (check(a[i]))
    	{
    		s+=a[i];
    		printf("%lld ",a[i]);
    		
		}
		
	}printf("\n");
	printf("%lld ",s);
}
int main()
{
	long long n;
	scanf("%lld",&n);
	long long *a = (long long *)malloc(n * sizeof(long long));
    

	nhapmang(a,n);
	inmang(a,n);
	chinhphuong(a,n);
	
	return 0;
    
	
}
