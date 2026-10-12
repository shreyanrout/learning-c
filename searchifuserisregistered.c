#include <stdio.h>

int main() {
    int n;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int sno[n], i, key, flag = 0;

    printf("Enter s.no's:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &sno[i]);
    }
    
    printf("enter key(user id): ");
    scanf("%d", &key);

    for (i = 0; i < n; i++) {
        if (sno[i] == key) {
            flag = 1;
            break;
        }
    }

    if (flag == 1) {
        printf("user is registered\n");
    } else {
        printf("user is not registered\n");
    }

    return 0;
}

