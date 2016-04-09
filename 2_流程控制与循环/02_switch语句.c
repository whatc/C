#include <stdio.h>
#include <stdint.h>

#define UP 1
#define DOWN 2
#define LEFT 3
#define RIGHT 4

/**
 * switch
 */
int main() {
    int32_t dir = DOWN;
//    int32_t dir;
    switch (dir){
        case UP:
            printf("Go up\n");
            break;
        case DOWN:
            printf("Go down\n");
            break;
        case LEFT:
            printf("Go left\n");
            break;
        case RIGHT:
            printf("Go light\n");
            break;
        default:
            printf("Dir unknow\n");
    }
    return 0;

}