#include <stdio.h>

int main(){
    int n;
    printf("enter n ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }printf("*");
	if (i > 1) {
            for (int j = 1; j <= 2 * i - 3; j++) {
                printf(" ");
            }printf("*");
        }printf("\n");
    }for (int i = 1; i <= 2 * n - 1; i++) {
        printf("*");
    }
    printf("\n");

    return 0;
}
 

