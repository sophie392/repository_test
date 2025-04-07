#include <stdio.h>

int main(){
    int array[3];
    for (int i = 0; i < 3; i++){
        array[i] = i + 3;
    }
    printf("Your array is: %d %d %d\n", array[0], array[1], array[2]);
    return 0;
}