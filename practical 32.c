
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void reverse(char *start, char *end) {
    while (start < end) {
        char temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main() {
    FILE *file = fopen("Demo.txt", "r");
    if (!file) {
        printf("Error: Could not open Demo.txt\n");
        return 1;
    }

    char line[1000];

    // Read file line by line
    while (fgets(line, sizeof(line), file)) {
        int i = 0;

        while (line[i] != '\0') {

            // Skip spaces
            while (line[i] == ' ' || line[i] == '\n' || line[i] == '\t') {
                putchar(line[i]);
                i++;
            }

            // Start of word
            int start = i;

            // Move to end of word
            while (line[i] != ' ' && line[i] != '\n' && line[i] != '\t' && line[i] != '\0') {
                i++;
            }

            // End of word
            int end = i - 1;

            // Reverse the word in-place
            reverse(&line[start], &line[end]);

            // Print reversed word
            for (int j = start; j <= end; j++) {
                putchar(line[j]);
            }
        }
    }

    fclose(file);
    return 0;
}
