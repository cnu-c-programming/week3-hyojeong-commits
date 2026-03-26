#include <stdio.h>

int average(int count, ...){
    va_list ac;
    va_start(ac, count);
    int sum = ;
    for(int i = 0; i < count; i++)
        sum += va_arg(ac, int);
    va_end(ap);
    return sum/count;
}

int main() {
    printf("%d\n", average(3, 10, 20, 30)); 
    printf("%d\n", average(5, 10, 20, 30, 40, 50));
    return 0;
}
