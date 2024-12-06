#include <cs50.h>
#include <stdio.h>

int main(void){

    // Get a number from user
    int x = get_int("x: ");
    int y = get_int("y: ");
    // float x = get_float("x: ");
    // float y = get_float("y: ");

    // Divide x by y
    // float z = x / y;
    float z = (float) x / (float) y;

    printf("%f\n", z);
}
