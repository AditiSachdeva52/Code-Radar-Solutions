#include <stdio.h>

int main() {
    char a[25];
    char b[25];
    sacnf("%s %s",&a,&b);
    printf("You entered: %s and %s",a,b);
    return 0;
}