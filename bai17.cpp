#include <stdio.h>
#include <math.h>

double min(double x, double y, double z) {
    return x<y && x<z?x:(y<z?y:z);
}
double max(double x, double y, double z) {
    return x>y && x>z?x:(y>z?y:z);
}

int sosanh(double x, double y, double z) {
    double sum = x+y+z;
    double tich = x*y*z;
    if (sum > tich) {
        printf("b) min= %lf\n", tich);
    } else {
        printf("b) min= %lf\n", sum);
    }
    return 0;
}

int main() {
    double x, y, z, tich, S;
    scanf("%lf%lf%lf", &x, &y, &z);
    tich = x*y*z;
    S = (x+y+z)/2;
    printf("MIN %lf\n", min(x, y, z));
    printf("MAX %lf\n", max(x, y, z));
    sosanh(x, y, z);
    if (S > tich) {
        printf("c) %.2lf\n", pow(tich, 2) + 1);
    } else {
        printf("c) %.2lf\n", pow(S, 2) + 1);
    }
    return 0;
}
