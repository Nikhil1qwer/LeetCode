#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *mergeAlternately(char *word1, char *word2) {
    int len1 = strlen(word1);
    int len2 = strlen(word2);
    int len = len1 + len2 + 1;

    char *dp = (char *)malloc(len * sizeof(char));
    int i = 0, j = 0, k = 0;
    while (i < len1 && j < len2) {
        dp[k++] = word1[i++];
        dp[k++] = word2[j++];
    }

    while (i < len1) {
        dp[k++] = word1[i++];
    }

    while (j < len2) {
        dp[k++] = word2[j++];
    }
    dp[k] = '\0';

    return dp;
}

int main() {
    char str1[101], str2[101];

    printf("Enter the first string: ");
    scanf("%s", str1);

    printf("Enter the second string: ");
    scanf("%s", str2);

    char *merged = mergeAlternately(str1, str2);
    printf("Merged string: %s\n", merged);

    free(merged);
    return 0;
}
