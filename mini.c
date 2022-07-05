#include <Stdio.h>

int main(){
    int a, b, min;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    min = a < b ? a : b;
    printf("Minimum of %d and %d is %d\n", a, b, min);
    return 0;
}