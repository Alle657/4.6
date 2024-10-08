#include <stdio.h>
#define PI 3.14159

int main() {
    int raggio = 1;
    float circonferenza, area;


    while (raggio <= 20) {
        circonferenza = 2 * PI * raggio;
        area = PI * raggio * raggio;


        printf("Raggio: %d - Circonferenza: %.2f - Area: %.2f\n", raggio, circonferenza, area);

        raggio++;
    }

    return 0;
}
