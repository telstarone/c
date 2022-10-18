#include <stdio.h>
int inc(int *a){
    a = a + 1;
    return(*a);
}
int main() {
    // Write C code here
    int s = 15;
    int *p = s;
    printf("%d", inc(*p));

    return 0;
} 