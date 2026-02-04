#include <stdio.h>
#define WIDTH 20
// #define HEIGHT 10

int main(void)
{
    // const int WIDTH = 20;
    const int HEIGHT = 10;

    int trianleArea = (WIDTH * HEIGHT) / 2;
    int rectangleArea = WIDTH * HEIGHT;

    printf("WIDTH=%d\n", WIDTH);
    printf("HEIGHT=%d\n", HEIGHT);
    printf("trianleArea=%d\n", trianleArea);
    printf("rectangleArea=%d\n", rectangleArea);

    return 0;
}