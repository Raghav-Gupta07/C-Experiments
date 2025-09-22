#include<stdio.h>
int x = 6;
int y = 8;

int function1() {

    printf("%d,%d\n", x , y);
    return 0;
}
int function2() {
    int x = 5;
    printf("%d,%d\n", x , y);
    return 0;
}
int function3() {
    int y = 1;
    printf("%d,%d\n", x , y);
    return 0;
}
int main() {
    function1();
    function2();
    function3();
    return 0;
}
