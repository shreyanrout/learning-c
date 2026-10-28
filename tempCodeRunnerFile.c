#include <stdio.h>
int main()
{
    int var = 4/9;
    printf("%d\n",var);
    // wont print because 4/9 is not of data type float but format specifier is looking for float data type

    float var1 = 4/9;
    printf("%.2f\n",var1);

    // wont print because 49 is not of float data type which var 1 has been assigned to 

    float var2 = 4.0/9.0;
    printf("%.2f\n",var2);

    // will print

    return 0;
}