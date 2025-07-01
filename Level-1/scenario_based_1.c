#include <stdio.h>

int main() {
    int length, width, height, surface_area;
    scanf("%d %d %d", &length, &width, &height);
    surface_area = 2 * (length * width + length * height + width * height);
    printf("%d\n", surface_area);
    return 0;
}

