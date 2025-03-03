#include <stdio.h>
int main() {
    int a, b, c; int triangleType;
    printf("Enter the lengths for each side: \n");
    scanf("%d %d %d", &a, &b, &c);
    if ((a + b <= c) || (b + c <= a) || (a + c <= b)) {
        printf("Invalid triangle...\n");return 0; }
    if (a == b && b == c) {
        triangleType = 1;
    } else if (a == b || b == c || a == c) {
        triangleType = 2; 
    } else {
        triangleType = 3; 
    }
    switch (triangleType) {
        case 1:
            printf("Equilateral Triangle...\n");
            break;
        case 2:
            printf("Isosceles Triangle...\n");
            break;
        case 3:
            printf("Scalene Triangle...\n");
            break;}}