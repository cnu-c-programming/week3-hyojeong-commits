#include <stdio.h>

int average(int count, ...){
    va_list ap;
    va_start(ap, count);
    int sum = ;
    for(int i = 0; i < count; i++)
        sum += va_arg(ap, int);
    va_end(ap);
    return sum/count;
}

int main() {
    printf("%d\n", average(3, 10, 20, 30)); 
    printf("%d\n", average(5, 10, 20, 30, 40, 50));
    return 0;
}
