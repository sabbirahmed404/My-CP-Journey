#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n); // Read the number of magnets
    
    char current[3]; 
    char previous[3]; 
    int groups = 0; 

 
    scanf("%s", current);
    groups = 1; // The first magnet always starts a new group

    for (int i = 1; i < n; i++) {
        scanf("%s", previous); // Read the next magnet

        
        if (previous[0] != current[0]) {
            groups++; // A new group is formed
        }
        
        // Update current to previous for the next iteration
        current[0] = previous[0];
        current[1] = previous[1];
        current[2] = '\0'; // Null terminate the string
    }

    printf("%d\n", groups); // Output the number of groups
    return 0;
}
