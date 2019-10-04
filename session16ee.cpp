#include <stdio.h>

void hello();
void bye();

# pragma startup hello
# pragma exit bye

int main(){
    printf("1\n");
    return 0;
}
void hello(){
    printf("2\n");
}
void bye(){
    printf("3\n");
}
