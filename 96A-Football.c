#include <stdio.h>
#include <string.h>

int main() {
    char var[101];
    int zeros = 0, ones = 0;
    scanf("%s", var);

    for (size_t i = 0; i < strlen(var); i++) {
        if (var[i] == '0') {
            zeros++;
            ones = 0;  
        } else if (var[i] == '1') {
            ones++;
            zeros = 0;   
        }

        if (zeros == 7 || ones == 7) {
            printf("YES\n");
            return 0;
        }
    }

    printf("NO\n");
    return 0;
}
