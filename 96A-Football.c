#include <stdio.h>
#include <string.h>

int main() {
    char var[100];
    int zeros = 0, ones = 0;
    scanf("%s", var);

    for (size_t i = 0; i < strlen(var); i++) {
        if (var[i] == '0') {
            zeros++;
            ones = 0;  // reset ones count
        } else if (var[i] == '1') {
            ones++;
            zeros = 0;  // reset zeros count
        }

        if (zeros == 7 || ones == 7) {
            printf("YES\n");
            return 0;
        }
    }

    printf("NO\n");
    return 0;
}