#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#define endl printf("\n")
void INPUT(int *a, int * b, int *size_a, int *size_b)
{
    char str1[50000], str2[50000];
    scanf("%s %s",str1,str2);
    *size_a=strlen(str1); *size_b=strlen(str2);
    for (int i=0; i<*size_a; i++)
    a[i]=(str1[*size_a-1-i]-'0');
    for (int i=0; i<*size_b; i++)
    b[i]=(str2[*size_b-1-i]-'0');
    return;
}
void Sum(int a[], int b[], int size_a, int size_b)
{
    while(size_a!=size_b)
    if(size_a<size_b) a[size_a++]=0;
    else b[size_b++]=0;
    int res[size_a];
    bool tmp=0;
    for(int i=0; i<size_a-1; i++)
    {
        int x=a[i]+b[i]+tmp;
        res[i]=x%10;
        tmp=x/10;
    }
    res[size_a-1]=a[size_a-1]+b[size_a-1]+tmp;
    printf("Tong: ");
    for (int i=size_a-1; i>=0; i--)
    printf("%d",res[i]);
    endl;
    return;
}
void swap(int *a, int *b, int size_a)
{
    for (int i=size_a-1; i>=0; i--) 
    {
        int tmp=a[i];
        a[i]=b[i];
        b[i]=tmp;
    }
    return;
}
void Ded(int a[], int b[], int size_a, int size_b)
{
    bool minus=0;
    while(size_a!=size_b)
    if(size_a<size_b) a[size_a++]=0;
    else b[size_b++]=0;
    for (int i=size_a-1; i>=0; i--)
    if(a[i]>b[i]) break;
    else if(a[i]<b[i]) {swap(a,b, size_a); minus=1; break;}
    int res[size_a];
    bool tmp=0;
    for (int i=0; i<size_a-1; i++)
    {
       res[i]=a[i]-b[i]-tmp;
       if(res[i]<0) {res[i]+=10;tmp=1;}
       else tmp=0;
    }
    res[size_a-1]=a[size_a-1]-b[size_a-1]-tmp;
    while(res[size_a-1]==0 && size_a>1) size_a--;
    printf("Hieu: ");
    if((size_a!=1 || res[0]!=0) && minus)  printf("-");
    for (int i=size_a-1; i>=0; i--) printf("%d",res[i]);
}
int main()
{
    int a[50000],b[50000];
    int size_a, size_b;
    INPUT(a,b, &size_a, &size_b);
    Sum(a,b,size_a, size_b);
    Ded(a,b, size_a, size_b);
}
