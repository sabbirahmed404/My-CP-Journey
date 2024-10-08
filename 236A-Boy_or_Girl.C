#include <stdio.h>
#include <string.h>

int main() {
    char username[101];
    int freq[26] = {0}; 
    int distinct = 0;

    // Input the username
    scanf("%s", username);
    

    for (int i = 0; username[i] != '\0'; i++) {
        // Check if this character has not been counted before
        if (freq[username[i] - 'a'] == 0) {
            freq[username[i] - 'a'] = 1;
            distinct++;
        }
    }
    

    if (distinct % 2 == 0) {
        printf("CHAT WITH HER!\n");
    } else {
        printf("IGNORE HIM!\n");
    }

    return 0;
}
