#include <stdio.h>
#include <string.h>

int main() {
    char words[100][50];
    int freq[100] = {0};
    int count = 0;
    char word[50];
    printf("Enter words (type 'END' to stop):\n");
    while (scanf("%s", word) && strcmp(word, "END") != 0) {
        int found = -1;
        for (int i = 0; i < count; i++) {
            if (strcmp(words[i], word) == 0) { found = i; break; }
        }
        if (found != -1) freq[found]++;
        else { strcpy(words[count], word); freq[count++] = 1; }
    }
    printf("Word frequencies:\n");
    for (int i = 0; i < count; i++) printf("%s: %d\n", words[i], freq[i]);
    return 0;
}
