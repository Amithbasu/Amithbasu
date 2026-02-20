#include <stdio.h>

int main() {
    char text[100];
    int key, i, choice;

    printf("1. Encrypt\n2. Decrypt\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("Enter a word: ");
    scanf("%s", text);

    printf("Enter key value: ");
    scanf("%d", &key);

    for(i = 0; text[i] != '\0'; i++) {

        if(choice == 1) {  // Encryption
            if(text[i] >= 'a' && text[i] <= 'z')
                text[i] = ((text[i] - 'a' + key) % 26) + 'a';
        }

        else if(choice == 2) {  // Decryption
            if(text[i] >= 'a' && text[i] <= 'z')
                text[i] = ((text[i] - 'a' - key + 26) % 26) + 'a';
        }
    }

    printf("Result: %s", text);

    return 0;
} 
