#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main() {
    char input[1001];
    fgets(input, sizeof(input), stdin);

    bool letters[26] = {false}; 
    int distinct_count = 0;

    for (int i = 0; i < strlen(input); i++) {
        if (input[i] >= 'a' && input[i] <= 'z') {
            if (!letters[input[i] - 'a']) {
                letters[input[i] - 'a'] = true;
                distinct_count++;
            }
        }
    }

    printf("%d\n", distinct_count);
    return 0;
}
