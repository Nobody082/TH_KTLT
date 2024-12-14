#include <stdio.h>
#include <string.h>

void sapXepChuoi(char* kitu) {
    int n = strlen(kitu);
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (kitu[i] > kitu[j]) {
                char temp = kitu[i];
                kitu[i] = kitu[j];
                kitu[j] = temp;
            }
        }
    }
}

int laAnagram(char* kitu1, char* kitu2) {
    if (strlen(kitu1) != strlen(kitu2)) {
        return 0;
    }

    sapXepChuoi(kitu1);
    sapXepChuoi(kitu2);

    return strcmp(kitu1, kitu2) == 0;
}

int main() {
    char kitu1[10000], kitu2[10000];
    scanf("%s", kitu1);
    scanf("%s", kitu2);

    if (laAnagram(kitu1, kitu2)) {
        printf(" la anagram.\n");
    } else {
        printf(" khog phai lŕ anagram .\n");
    }

    return 0;
}

