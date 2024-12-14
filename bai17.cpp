#include<stdio.h>
#include<math.h>
double min(double x,double y, double z) {
	return  x<y&&x<z?x:(y<z?y:z);
}

double max(double x,double y , double z){
	return x>y&&x>z?x:(y>z?y:z); 
} 

double  sosanh(double x,double y,double z){
   double sum= x+y+z;
   double tich= x*y*z;
   	if (sum>tich) {
	   printf("b)min=%lf\n",tich);}
	else printf("b) min=%lf\n",sum) ;
	return 0; 
}  
double giatri(double x, double y, double z){
	double tich=x*y*z;
	double S=(x+y+z)/2;
	 if (S>tich) printf("c) %.2lf", (double)pow(tich,2)+1);
	 else printf("c)%.2lf", (double)pow(S,2)+1);
	 return 0; 
} 
 int main()
 {
 	double x,y,z;
 	scanf("%lf%lf%lf",&x,&y,&z);
	  printf("MIN %lf\n",min(x,y,z));
	  printf("MAX %lf\n",max(x,y,z));
	   sosanh(x,y,z); 
	   giatri(x,y,z); 
 	return 0;
 }
