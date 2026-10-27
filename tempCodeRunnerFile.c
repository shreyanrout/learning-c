#include <stdio.h>

int main() {
    float var1 = 3.1415926535897932f;               
    double var2 = 3.14159265358979323;
    long double var3 = 3.1415926535897932384626433L; 

    printf("%zu\n", sizeof(float));
    printf("%zu\n", sizeof(double));
    printf("%zu\n", sizeof(long double));

    printf("%.16f\n", var1);
    printf("%.16f\n", var2);
    printf("%.21Lf\n", var3);

    return 0;
}
