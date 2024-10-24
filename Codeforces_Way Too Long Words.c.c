#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n); // Read the number of words
    char word[101];   // Array to store each word (max length is 100 + 1 for null terminator)

    for (int i = 0; i < n; i++) {
        scanf("%s", word); // Read each word
        int length = strlen(word); // Get the length of the word

        // Check if the word is too long
        if (length > 10) {
            // Create the abbreviation
            printf("%c%d%c\n", word[0], length - 2, word[length - 1]);
        } else {
            // Print the word as it is
            printf("%s\n", word);
        }
    }

    return 0;
}
