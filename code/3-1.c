#include <stdio.h>

int call_out() {
    static int count = 1; 
    return ++count;
}
int main() {
    printf("%d\n", call_count());
    printf("%d\n", call_count());
    printf("%d\n", call_count());

    return 0;
}
