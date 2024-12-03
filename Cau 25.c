#include <stdio.h>
#include <math.h>

double tinh(double a, double x, int n) {
    double kq = x;  
    for (int i = 0; i < n; i++) {
        kq = pow((kq + a), 2) + pow(a, 2);  
    }
    return result + a;  
}

int main() {
    double a, x;
    int n;
    scanf("%lf%lf%d", &a, &x, &n);
    if (n < 0) {
        printf("Giá tri n phai la so tu nhien!\n");
    } else {
        double kq = tinh(a, x, n);
        printf("%.2f\n", kq);
    }
    return 0;
}

