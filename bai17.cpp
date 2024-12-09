#include<stdio.h>
#include<math.h>
int min(int x,int y,int z) {
	return  x<y&&x<z?x:(y<z?y:z);
}

int max(int x,int y , int z){
	return x>y&&x>z?x:(y>z?y:z); 
} 

int  sosanh(int x,int y,int z){
   float sum= x+y+z;
   float tich= x*y*z;
   	if (sum>tich) {
	   printf("b)min=%.0f\n",tich);}
	else printf("b) min=%0.f\n",sum) ;
	return 0; 
}  
 int main()
 {
 	float x,y,z,tich,S;
 	scanf("%f%f%f",&x,&y,&z);
 	  tich= x*y*z;
	  S= (x+y+z)/2;
	  printf("MIN %d\n",min(x,y,z));
	  printf("MAX %d\n",max(x,y,z));
	   sosanh(x,y,z); 
	if (S>tich) printf("c) %.2f",(float)pow(tich,2)+1);
	else printf("c)%.2f",(float)pow(S,2)+1) ;
 	return 0;
 }
