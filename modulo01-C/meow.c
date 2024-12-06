#include <stdio.h>

// Prototype
void meow(void);

int main(void){
    // printf("meow\n");
    // printf("meow\n");
    // printf("meow\n");

    // for(int i = 0; i < 3; i++){
    //     meow();
    // }

    meow(3);
}

// void meow(void){
//     printf("meow\n");
// }

void meow(int n){
    for(int i = 0; i < n; i++){
        printf("meow\n");
    }
}
