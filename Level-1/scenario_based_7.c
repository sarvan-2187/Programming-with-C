#include <stdio.h>
int main() {
    int amtgiven, billamt;
    scanf("%d", &amtgiven);
    scanf("%d", &billamt);
    int quotient = amtgiven / billamt;
    int remainder = amtgiven % billamt;
    printf("Quotient:%d\n", quotient);
    printf("Remainder:%d\n", remainder);
    return 0;
}

