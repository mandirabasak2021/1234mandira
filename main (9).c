// Powered by iNeuron
#include <stdio.h>

int main(void) {
        int DD, MM,YYYY;
    printf("Enter date (DD/MM/YYYY) format: ");
    scanf("%d/%d/%d", &DD, &MM, &YYYY);
    printf("\nDay-%02d Month-%02d Year-%04d\n", DD,MM,YYYY);
    return 0;
}
